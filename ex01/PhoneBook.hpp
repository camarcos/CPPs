#include <iostream>
#include <iomanip>
#include "Contact.hpp"

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#define MAX_CONTACTS 8

/* PHONEBOOK CLASS */
class	PhoneBook
{
	private:
		Contact contacts[MAX_CONTACTS];
		size_t	position;
		bool	isFull;
		size_t	getTotal(void);
	public:
		PhoneBook();
		~PhoneBook();

		void	add(void);
		void	search(void);
};

#endif