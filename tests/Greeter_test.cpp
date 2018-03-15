#include "gtest/gtest.h"
#include "../src/Greeter.h"

// Tests Greeter

// Test greet of Greeter
TEST(GreeterTest, Greet) {
	Greeter greeter;
	EXPECT_STREQ(greeter.greet().c_str(), "Hello World!");
}

// Test greeting with name of Greeter
TEST(GreeterTest, GreetWithName) {
	Greeter greeter;
	EXPECT_STREQ(greeter.greet("World").c_str(), "Hello, World!");
}
