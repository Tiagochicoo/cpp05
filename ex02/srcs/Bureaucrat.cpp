/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 09:47:03 by tpereira          #+#    #+#             */
/*   Updated: 2023/06/19 22:07:41 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat() : _name("NoNameBoy")
{
	_grade = 150;
	std::cout << this->getName() << " Bureaucrat Default constructor called!" << std::endl;
}

Bureaucrat::Bureaucrat(int grade) : _name("NoNameBoy"), _grade(grade)
{
	if (grade < 1)
		throw(Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw(Bureaucrat::GradeTooLowException());
	std::cout << this->getName() << " Bureaucrat Int constructor called!" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw(Bureaucrat::GradeTooLowException());
	else if (grade > 150)
		throw(Bureaucrat::GradeTooHighException());

	std::cout << this->getName() << " Bureaucrat Full constructor called!" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	*this = src;
	std::cout << this->getName() << " Bureaucrat Copy constructor called!" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
	std::cout << this->getName() << " Bureaucrat Destructor called!" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &				Bureaucrat::operator=( Bureaucrat const & rhs )
{
	// _name is a const string, which can't be modified...and it's exactly what the = operator tries to do 
	if ( this != &rhs )
		this->_grade = rhs.getGrade();
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade() << "." << std::endl;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Bureaucrat::incrementGrade()
{
	_grade--;
	if (_grade < 1)
		throw(Bureaucrat::GradeTooHighException());
}

void Bureaucrat::decrementGrade()
{
	_grade++;
	if (_grade > 150)
		throw(Bureaucrat::GradeTooLowException());
}

void Bureaucrat::signForm(std::string formName)
{
	if (_grade  && _grade >= 1)
		std::cout << this->getName() << " signed " << formName << std::endl;
	else
		std::cout << this->getName() << " couldn't sign " << formName << " because " << this->getName() << "'s grade is too low" << std::endl;
}

void Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& error)
	{
		std::cout << this->_name << " failed to execute " << form.getName() << " because " << error.what() << std::endl;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const Bureaucrat::getName() const
{
	return _name;
}

unsigned int Bureaucrat::getGrade() const
{
	return _grade;
}

/* ************************************************************************** */