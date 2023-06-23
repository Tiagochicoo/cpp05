/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:58:49 by tpereira          #+#    #+#             */
/*   Updated: 2023/06/23 20:38:49 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
	std::cout << "Intern Default constructor called!" << std::endl;
}

Intern::Intern( const Intern & src )
{
	*this = src;
	std::cout << "Intern Copy Constructor called!" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
	std::cout << "Intern Destructor called!" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &				Intern::operator=( Intern const & rhs )
{
	if ( this != &rhs )
		*this = rhs;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, Intern const & i )
{
	o << "Value = " << i;
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

AForm * Intern::makeForm(std::string const & name, std::string const & target)
{
	int			i = 0;
	AForm * (*formsArray[3])(std::string const &) =
	{
		&Intern::_createPresidentialPardonForm,
		&Intern::_createRobotomyRequestForm,
		&Intern::_createShrubberyCreationForm
	};

	std::string const availableForms[3] = 
	{
		"shrubbery creation",
		"presidential pardon",
		"robotomy request"
	};

	for (i = 0; i < 3; i++)
	{
		if (availableForms[i] == name)
		{
			std::cout << "Intern created " << name << "!" << std::endl;
			return (formsArray[i](target));
		}
	}
	std::cout << "Sorry! Can't create " << name << "!" << std::endl;
	return (NULL);
}

AForm * Intern::_createPresidentialPardonForm(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}

AForm * Intern::_createRobotomyRequestForm(std::string const & target)
{
	return (new RobotomyRequestForm(target));
}

AForm * Intern::_createShrubberyCreationForm(std::string const & target)
{
	return (new ShrubberyCreationForm(target));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */