CXX = g++

SRC = $(wildcard src/*.cpp) $(wildcard src/**/*.cpp)

bin/main: $(SRC:%.cpp=%.o)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -lpthread $^ -o $@

clean:
	find . -name '*.o' -exec rm {} \; && rm bin/main
