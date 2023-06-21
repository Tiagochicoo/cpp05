/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:58:49 by tpereira          #+#    #+#             */
/*   Updated: 2023/06/21 19:30:26 by tpereira         ###   ########.fr       */
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

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string availableForms[3];
	int			i = 0;

	availableForms[0] = "shrubbery creation";
	availableForms[1] = "presidential pardon";
	availableForms[2] = "robotomy request";

	for (i = 0; i < 3; i++)
	{
		if (name.compare(availableForms[i]))
			break;
	}

	switch (i)
	{
		case 0:
			std::cout << "Intern Created a ShrubberryCreationForm!" << std::endl;
			return (new ShrubberyCreationForm(target));
		case 1:
			std::cout << "Intern Created a PresidentialPardonForm!" << std::endl;
			return (new PresidentialPardonForm(target));
		case 2:
			std::cout << "Intern Created a RobotomyRequestForm!" << std::endl;
			return (new RobotomyRequestForm(target));
		default:
			std::cout << "Sorry! No form available with that name!" << std::endl;
			return NULL;
	}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */