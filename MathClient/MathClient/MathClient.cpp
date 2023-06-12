// MathClient.cpp : Client app for MathLibrary DLL.
// #include "pch.h" Uncomment for Visual Studio 2017 and earlier
#include <iostream>
#include <string>
#include "MathLibrary.h"


bool first = true;

int main()
{
	if (first == true) {
		std::cout << "calculator" << std::endl;
	}
	first = false;
	std::cout << "select operation from + - * /" << std::endl;
	std::string ope;
	std::cin >> ope;
	if (ope == "+" || ope == "-" || ope == "*" || ope == "/") {
		int result;
		if (ope == "+") { result = addition(); }
		if (ope == "-") { result = subtraction(); }
		if (ope == "*") { result = multiplication(); }
		if (ope == "/") { result = division(); }
		std::cout << "result is " << result << std::endl;
		std::cout << "will you continue calculation? Y/N ";
		std::string yesno;
		std::cin >> yesno;
		if (yesno == "y" || yesno == "n" || yesno == "Y" || yesno == "N") {
			if (yesno == "y" || yesno == "Y") {
				main();
			}
			if (yesno == "n" || yesno == "n") {
				return 0;
			}
		}
		if (yesno != "y" && yesno != "n" && yesno != "Y" && yesno != "N") {
			for (;;) {
				std::cout << "it is wrong." << std::endl;
				std::cout << "will you continue calculation? Y/N ";
				std::cin >> yesno;
				if (yesno == "y" || yesno == "n" || yesno == "Y" || yesno == "N") {
					if (yesno == "y" || yesno == "Y") {
						main();
					}
					if (yesno == "n" || yesno == "N") {
						return 0;
					}
				}
				if (yesno != "y" && yesno != "n" && yesno != "Y" && yesno != "N") {}
			}

		}

	}
	if (ope != "+" && ope != "-" && ope != "*" && ope != "/") {
		std::cout << "it is wrong." << std::endl;
		main();
	}
}