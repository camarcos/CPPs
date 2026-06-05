/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 12:41:33 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/05 11:10:53 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>

#define SIGN_PRESIDENTIAL 25
#define EXEC_PRESIDENTIAL 5

class PresidentialPardonForm : public AForm
{
	public:
		/* OCCF */
		PresidentialPardonForm();
		PresidentialPardonForm( const std::string _target );
		PresidentialPardonForm( const PresidentialPardonForm& other );
		PresidentialPardonForm& operator=( const PresidentialPardonForm& other );
		~PresidentialPardonForm();

		/* Public Methods */
		virtual void execute(Bureaucrat const & executor) const;
};
