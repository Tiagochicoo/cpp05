/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 20:29:00 by tpereira          #+#    #+#             */
/*   Updated: 2023/06/19 22:26:02 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("NoTarget")
{
	std::cout << "RobotomyRequestForm Default Constructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	_target = target;
	std::cout << "RobotomyRequestForm String (Target) Constructor Called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ) : AForm(src)
{
	this->_target = src._target;
	std::cout << "RobotomyRequestForm Copy Constructor Called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor Called" << std::endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &				RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs )
{
	if ( this != &rhs )
	{
		this->_target = rhs._target;
		std::cout << "RobotomyRequestForm Copy Assignment Operator Called" << std::endl;
	}
	return *this;
}

std::ostream &			operator<<( std::ostream & o, RobotomyRequestForm const & i )
{
	o << "Name = " << i.getName();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	RobotomyRequestForm::formFunction() const
{
	srand(time(NULL));
	int randomNumber = rand() % 100;

	std::cout << "rrrrrrrrrrrrr, rrrrrrr tick a tick a tick a tick a rrrrrr" << std::endl;
	if (randomNumber < 50)
		std::cout << _target << " robotomized successfully!" << std::endl;
	else
		std::cout << "Sorry, robotomy has failed!" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */