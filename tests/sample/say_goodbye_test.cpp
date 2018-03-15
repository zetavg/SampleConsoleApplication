#include <sstream>
#include "gtest/gtest.h"
#include "../../src/sample/say_goodbye.h"

TEST(SayGoodbyeTest, SayGoodbyeSuccess) {
	std::streambuf* orig_buf = std::cout.rdbuf();
	std::cout.rdbuf(NULL);
	sample::say_goodbye();
	std::cout.rdbuf(orig_buf);
}
