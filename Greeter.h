#pragma once

#include <string>

class Greeter
{
public:
	Greeter();
	std::string greet();
	std::string greet(std::string name);
	~Greeter();
};
