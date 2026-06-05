/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 12:41:27 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/05 11:07:03 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>
#include <cstdlib>

#define SIGN_ROBOTOMY 72
#define EXEC_ROBOTOMY 45

class RobotomyRequestForm : public AForm
{
	public:
		/* OCCF */
		RobotomyRequestForm();
		RobotomyRequestForm( const std::string _target );
		RobotomyRequestForm( const RobotomyRequestForm& other );
		RobotomyRequestForm& operator=( const RobotomyRequestForm& other );
		~RobotomyRequestForm();

		/* Public Methods */
		virtual void execute(Bureaucrat const & executor) const;
};
