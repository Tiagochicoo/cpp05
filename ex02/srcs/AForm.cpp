/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:56:12 by tpereira          #+#    #+#             */
/*   Updated: 2023/05/13 11:03:32 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm() : _name("NoNameBoy"), _minSignGrade(150), _minExecGrade(150)
{
	_signed = false;
	std::cout << this->getName() << " AForm Default constructor called!" << std::endl;
}

AForm::AForm(std::string name, int minSignGrade, int minExecGrade) : _name(name), _minSignGrade(minSignGrade), _minExecGrade(minExecGrade)
{
	_signed = false;
	if (_minSignGrade < 1)
		throw(AForm::GradeTooHighException());
	else if (_minSignGrade > 150)
		throw(AForm::GradeTooLowException());
	std::cout << this->getName() << " AForm Full constructor called!" << std::endl;
}

AForm::AForm( const AForm & src ) : _name(src.getName()), _minSignGrade(src.getMinSignGrade()), _minExecGrade(src.getMinExecGrade())
{
	*this = src;
	std::cout << this->getName() << " AForm Copy constructor called!" << std::endl;
}



/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
	std::cout << this->getName() << " AForm Destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &				AForm::operator=( AForm const & rhs )
{
	if ( this != &rhs )
		*this = rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, AForm const & i )
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

std::string const AForm::getName() const
{
	return _name;
}

bool AForm::getSigned() const
{
	return _signed;
}

unsigned int AForm::getMinSignGrade() const
{
	return _minSignGrade;
}

unsigned int AForm::getMinExecGrade() const
{
	return _minExecGrade;
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _minSignGrade)
		throw(AForm::GradeTooLowException());
	_signed = true;
	std::cout << bureaucrat.getName() << " signed " << this->getName() << std::endl;
}


/* ************************************************************************** */