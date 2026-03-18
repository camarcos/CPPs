#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact()
{
	this->Name = "";
	this->LastName = "";
	this->NickName = "";
	this->PhoneNumber = "";
	this->DarkSecret = "";
}

Contact::Contact(std::string Name, std::string LastName, std::string NickName, std::string PhoneNumber, std::string DarkSecret)
{
	this->Name = Name;
	this->LastName = LastName;
	this->NickName = NickName;
	this->PhoneNumber = PhoneNumber;
	this->DarkSecret = DarkSecret;
}

Contact::~Contact() {}

std::string	Contact::getName(bool truncate)
{
	if (truncate)
		return this->truncate(this->Name);
	return this->Name;
}

std::string	Contact::getLastName(bool truncate)
{
	if (truncate)
		return this->truncate(this->LastName);
	return this->LastName;
}

std::string	Contact::getNickName(bool truncate)
{
	if (truncate)
		return this->truncate(this->NickName);
	return this->NickName;
}

std::string	Contact::getPhoneNumber(bool truncate)
{
	if (truncate)
		return this->truncate(this->PhoneNumber);
	return this->PhoneNumber;
}

std::string	Contact::getDarkSecret(bool truncate)
{
	if (truncate)
		return this->truncate(this->DarkSecret);
	return this->DarkSecret;
}

std::string	Contact::truncate(std::string str)
{
	std::string	aux;

	if(str.length() <= 10)
		return (str);
	for(int i = 0; i < 9; i++)
		aux += str[i];
	aux += '.';
	return (aux);
}
