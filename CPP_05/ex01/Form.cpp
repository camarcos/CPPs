/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 11:39:11 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/09 13:46:12 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* Orthodox Canonical Class Form */
Form::Form(): _name("Default"), _isSigned(false), _signGrade(1), _execGrade(1) {}

Form::Form( std::string _name, int _signGrade, int _execGrade ): _name(_name), _isSigned(false), _signGrade(_signGrade), _execGrade(_execGrade)
{
	if (_signGrade < 1)
		throw Form::GradeTooHighException();
	if (_execGrade < 1)
		throw Form::GradeTooHighException();
	if (_signGrade > 150)
		throw Form::GradeTooLowException();
	if (_execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form ( const Form& other ): _name(other._name), _isSigned(other._isSigned), _signGrade(other._signGrade), _execGrade(other._execGrade) {}

Form& Form::operator=( const Form& other )
{
	if (this != &other)
		this->_isSigned = other._isSigned;
	return *this;
}

Form::~Form() {}

/* Exceptions */
const char* Form::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "grade too low";
}

const char* Form::AlreadySingedException::what() const throw()
{
	return "form is already signed";
}

/* Public Methods */
std::string Form::getName() const { return this->_name; }

const bool& Form::getIsSigned() const { return this->_isSigned; }

const unsigned int& Form::getSignGrade() const { return this->_signGrade; }

const unsigned int& Form::getExecGrade() const { return this->_execGrade; }

void Form::beSigned( const Bureaucrat& bureaucrat )
{
	if (this->_isSigned == true)
		throw Form::AlreadySingedException();
	if (bureaucrat.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	this->_isSigned = true;
}

/* << operator overload */
std::ostream& operator<<(std::ostream& op, const Form& form )
{
	op << "Form name: " << form.getName() << '\n';
	op << "\t - Grade to sign form: " << form.getSignGrade() << '\n';
	op << "\t - Grade to execute form: " << form.getExecGrade() << '\n';
	op << "\t - Is signed: " << (form.getIsSigned() ? "true" : "false") << '\n';

	return op;
}