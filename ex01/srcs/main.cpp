/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 10:45:29 by tpereira          #+#    #+#             */
/*   Updated: 2023/05/09 19:48:05 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	// Bureaucrat a("Tom", 5);
	try
	{
		Bureaucrat a("Tom", 500);
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