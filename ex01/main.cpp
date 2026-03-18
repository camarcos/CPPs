#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

int main(void)
{	
	std::string	input;
	PhoneBook	book;

	std::cout << std::endl;
	std::cout << " Welcome to MyAwesomePhoneBook! 📞 " << std::endl;
	std::cout << std::endl;
	while (1)
	{
		std::cout << "Type a command (";
		std::cout << "ADD" << ", ";
		std::cout << "SEARCH" << " or ";
		std::cout << "EXIT" << "): ";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "\nCtrl + D signal. Exiting..." << std::endl;
			return 1;
		}
		if (input.compare("ADD") == 0)
			book.add();
		else if (input.compare("SEARCH") == 0)
			book.search();
		else if (input.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Invalid command!" << std::endl;
	}
	std::cout << "Bye 👋" << std::endl;
	return 0;
}
