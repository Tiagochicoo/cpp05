/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 10:45:29 by tpereira          #+#    #+#             */
/*   Updated: 2023/06/19 22:14:40 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat john("John", 10);
	// ShrubberyCreationForm test1("Shrubbery");
	RobotomyRequestForm test2("Robotomy");
	// PresidentialPardonForm test3("Presidential");

	// test1.formFunction();
	// test2.formFunction();
	// test3.formFunction();

	// test1.beSigned(john);
	// test1.execute(john);
	// test2.beSigned(john);
	// test2.execute(john);
	// test3.beSigned(john);
	// test3.execute(john);

	// test1.beSigned(john);
	test2.beSigned(john);
	john.executeForm(test2);

	// TODO:
	// talk about forward declaration of the Bureaucrat class in AForm

	return 0;
}