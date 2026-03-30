/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 20:05:27 by carolinamc        #+#    #+#             */
/*   Updated: 2026/03/22 20:05:30 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

#ifndef CONTACT_HPP
#define CONTACT_HPP

/* CONTACT CLASS */
class	Contact {
	private:
		std::string	Name;
		std::string	LastName;
		std::string	NickName;
		std::string	PhoneNumber;
		std::string	DarkSecret;
		std::string	truncate(std::string str);
	public:
		Contact();
		Contact(std::string	Name,
				std::string LastName,
				std::string NickName,
				std::string PhoneNumber,
				std::string DarkSecret);
		~Contact();

		std::string	getName(bool truncate);
		std::string	getLastName(bool truncate);
		std::string	getNickName(bool truncate);
		std::string	getPhoneNumber(bool truncate);
		std::string	getDarkSecret(bool truncate);
};

#endif