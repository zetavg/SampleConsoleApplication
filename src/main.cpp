#include <iostream>
#include <string>

#include "Greeter.h"
#include "sample/say_goodbye.h"


int main()
{
	Greeter greeter;
	std::cout << greeter.greet() << std::endl;
	std::string name;
	std::cout << "Please enter your name: ";
	std::cin >> name;
	std::cout << greeter.greet(name) << std::endl;
	sample::say_goodbye();
    return 0;
}
