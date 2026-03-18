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

Contact::Contact(std::string name, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkSecret) {
	this->Name = name;
	this->LastName = lastName;
	this->NickName = nickName;
	this->PhoneNumber = phoneNumber;
	this->DarkSecret = darkSecret;
}

Contact::~Contact() {}

std::string	Contact::getName(bool truncate)
{
	return truncate ? this->truncate(this->Name) : this->Name;
}

std::string	Contact::getLastName(bool truncate)
{
	return truncate ? this->truncate(this->LastName) : this->LastName;
}

std::string	Contact::getNickName(bool truncate)
{
	return truncate ? this->truncate(this->NickName) : this->NickName;
}

std::string	Contact::getPhoneNumber(bool truncate)
{
	return truncate ? this->truncate(this->PhoneNumber) : this->PhoneNumber;
}

std::string	Contact::getDarkSecret(bool truncate)
{
	return truncate ? this->truncate(this->DarkSecret) : this->DarkSecret;
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
