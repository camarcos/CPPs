/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 20:05:59 by carolinamc        #+#    #+#             */
/*   Updated: 2026/03/22 20:06:01 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

static bool	isSpaces(std::string& input)
{
	for (int i = 0; input[i]; i++) 
	{
		if (!std::isspace(input[i]))
			return false;
	}
	return true;
}

static bool	isValidNumber(std::string& input)
{
	if (input.length() != 9)
	{
		std::cout << "Number must have 9 digits." << std::endl;
		return false;
	}
	for (int i = 0; input[i]; i++)
	{
		if (!std::isdigit(input[i]))
		{
			std::cout << "Number can only contain numbers." << std::endl;
			return false;
		}
	}
	return true;
}

static std::string	askInfo(std::string question)
{
	std::string	input;

	while (input.empty() || isSpaces(input))
	{
		std::cout << question;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "\nCtrl + D signal. Exiting..." << std::endl;
			exit(EXIT_FAILURE);
		}
		if (input.empty() || isSpaces(input))
		{
			std::cout << "Input cannot be empty." << std::endl;
			continue ;
		}
		if ((question.compare("Phone number: ") == 0) && !isValidNumber(input))
		{
			input.clear();
			continue ;
		}
	}
	for (int i = 0; input[i]; i++)
	{
		if (input[i] == '\t')
			input.replace(i, 1, " ");
	}
	return (input);
}

static bool	isValidIndex(std::string index)
{
	if (index.length() != 1)
	{
		std::cout << "Invalid index. Please type only one digit." << std::endl;
		return false;
	}
	if (!std::isdigit(index.at(0)) || index.at(0) > '8')
	{
		std::cout << "Index needs to be a number from 0 to 8." << std::endl;
		return false;
	}
	return true;
}

PhoneBook::PhoneBook()
{
	this->position = 0;
	this->isFull = false;
}

PhoneBook::~PhoneBook() {}

size_t PhoneBook::getTotal()
{
	if (this->isFull)
		return MAX_CONTACTS;
	else
		return this->position;
}

void	PhoneBook::add()
{
	std::string	Name, LastName, NickName, PhoneNumber, DarkSecret;

	std::cout << "Please fill in the details of the new contact:" << std::endl;
	Name = askInfo("First Name: ");
	LastName = askInfo("Last Name: ");
	NickName = askInfo("Nick Name: ");
	PhoneNumber = askInfo("Phone number: ");
	DarkSecret = askInfo("Dark Secret: ");

	if (this->position == MAX_CONTACTS)
	{
		this->isFull = true;
		this->position = 0;
	}
	this->contacts[position] = Contact(Name, LastName, NickName, PhoneNumber, DarkSecret);
	this->position++;
	std::cout << "Contact added successfully!" << std::endl;
}

void	PhoneBook::search()
{
	size_t		total_contacts;
	std::string	index;

	total_contacts = this->getTotal();
	if (total_contacts == 0 && !this->isFull)
	{
		std::cout << "Contact list is empty! Add a new contact before checking the list." << std::endl;
		return ;
	}
	std::cout << "|" << std::setfill(' ') << std::setw(11) << "Index|";
	std::cout << std::setfill(' ') << std::setw(11) << "First Name|";
	std::cout << std::setfill(' ') << std::setw(11) << "Last Name|";
	std::cout << std::setfill(' ') << std::setw(11) << "Nickname|" << std::endl;

	for(size_t i = 0; i < total_contacts; i++) 
	{
		std::cout << "|" << std::setfill(' ') << std::setw(10) << i + 1 << "|";
		std::cout << std::setfill(' ') << std::setw(10) << this->contacts[i].getName(true) << "|";
		std::cout << std::setfill(' ') << std::setw(10) << this->contacts[i].getLastName(true) << "|";
		std::cout << std::setfill(' ') << std::setw(10) << this->contacts[i].getNickName(true) << "|";
		std::cout << std::endl;
	}

	std::cout  << std::endl;
	while (1)
	{
		std::cout << "Type an index to see in detail or 0 to return to menu: ";
		std::getline(std::cin, index);
		if (std::cin.eof())
		{
			std::cout << "\nCtrl + D signal. Exiting..." << std::endl;
			exit(EXIT_FAILURE);
		}
		if (index.compare("0") == 0)
			break ;
		else if (isValidIndex(index))
		{
			if (!this->isFull && ((index[0] - '1') > ((int)this->position - 1)))
			{
				std::cout << "There is no contact for that index." << std::endl;
				continue ;
			}
			std::cout << "CONTACT INFO:" << std::endl;
			std::cout << "First Name: " << this->contacts[index[0] - '1'].getName(false) << std::endl;
			std::cout << "Last Name: " << this->contacts[index[0] - '1'].getLastName(false) << std::endl;
			std::cout << "Nick Name: " << this->contacts[index[0] - '1'].getNickName(false) << std::endl;
			std::cout << "Phone Number: " << this->contacts[index[0] - '1'].getPhoneNumber(false) << std::endl;
			std::cout << "Darkest Secret: " << this->contacts[index[0] - '1'].getDarkSecret(false) << std::endl;
		}
	}
}
