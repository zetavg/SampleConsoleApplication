// ConsoleApplication.cpp: 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include <iostream>
#include <string>

#include "Greeter.h"


int main()
{
	Greeter greeter;
	std::cout << greeter.greet() << std::endl;
	std::string name;
	std::cout << "Please enter your name: ";
	std::cin >> name;
	std::cout << greeter.greet(name);
    return 0;
}
