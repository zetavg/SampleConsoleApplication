CXX = g++
LDLIBS = -lstdc++

SRC = $(filter-out stdafx.cpp, $(wildcard *.cpp))

main: $(SRC:%.cpp=%.o)

clean:
	rm -rf main *.o *.d
