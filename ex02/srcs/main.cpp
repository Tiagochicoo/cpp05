/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 10:45:29 by tpereira          #+#    #+#             */
/*   Updated: 2023/05/13 11:55:18 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
	AForm b("Form1", 5, 5);
	Bureaucrat a("Tom", 5);
	b.beSigned(a);
	a.signForm("Form2");
	std::cout << b << std::endl;
	std::cout << b.getMinExecGrade() << std::endl;
	try
	{
		Bureaucrat a("Tom", 4);
		// AForm b("Form1", 5, 5);
		b.beSigned(a);
		// while (1)
		// 	a.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// std::cout << a.getGrade() << std::endl;

	return 0;
}