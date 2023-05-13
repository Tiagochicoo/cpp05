/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:56:12 by tpereira          #+#    #+#             */
/*   Updated: 2023/05/13 11:03:32 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form() : _name("NoNameBoy"), _minSignGrade(150), _minExecGrade(150)
{
	_signed = false;
	std::cout << this->getName() << " Form Default constructor called!" << std::endl;
}

Form::Form(std::string name, int minSignGrade, int minExecGrade) : _name(name), _minSignGrade(minSignGrade), _minExecGrade(minExecGrade)
{
	_signed = false;
	if (_minSignGrade < 1)
		throw(Form::GradeTooHighException());
	else if (_minSignGrade > 150)
		throw(Form::GradeTooLowException());
	std::cout << this->getName() << " Form Full constructor called!" << std::endl;
}

Form::Form( const Form & src ) : _name(src.getName()), _minSignGrade(src.getMinSignGrade()), _minExecGrade(src.getMinExecGrade())
{
	*this = src;
	std::cout << this->getName() << " Form Copy constructor called!" << std::endl;
}



/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
	std::cout << this->getName() << " Form Destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &				Form::operator=( Form const & rhs )
{
	if ( this != &rhs )
		*this = rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Name: " << i.getName() << std::endl;
	o << "Signed: " << (i.getSigned() == 0 ? "No" : "Yes") << std::endl;
	o << "Min Sign Grade: " << i.getMinSignGrade() << std::endl;
	o << "Min Exec Grade: " << i.getMinExecGrade() << std::endl;

	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const Form::getName() const
{
	return _name;
}

bool Form::getSigned() const
{
	return _signed;
}

unsigned int Form::getMinSignGrade() const
{
	return _minSignGrade;
}

unsigned int Form::getMinExecGrade() const
{
	return _minExecGrade;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _minSignGrade)
		throw(Form::GradeTooLowException());
	_signed = true;
	std::cout << bureaucrat.getName() << " signed " << this->getName() << std::endl;
}


/* ************************************************************************** */