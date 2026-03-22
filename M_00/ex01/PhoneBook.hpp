/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 20:06:05 by carolinamc        #+#    #+#             */
/*   Updated: 2026/03/22 20:06:07 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include <stdlib.h>

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