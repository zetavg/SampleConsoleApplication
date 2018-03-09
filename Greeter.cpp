#include "stdafx.h"
#include "Greeter.h"


Greeter::Greeter()
{
}

std::string Greeter::greet()
{
	return "Hello World!";
}

std::string Greeter::greet(std::string name)
{
	return "Hello, " + name + "!";
}


Greeter::~Greeter()
{
}
