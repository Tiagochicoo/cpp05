/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 10:45:29 by tpereira          #+#    #+#             */
/*   Updated: 2023/06/23 21:49:40 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

int main()
{	
	// {
	// 	Intern someRandomIntern;
	// 	AForm* rrf;
	// 	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	// 	std::cout << rrf->getName()  << std::endl;
	// 	delete rrf;
	// }

	std::cout << std::endl;
    std::cout << "Form Creation Tests" << std::endl;
    std::cout << std::endl;

    AForm *form;
    Intern toni;

	form = toni.makeForm("error", "Official Shrub");
	delete form;
	form = toni.makeForm("shrubbery creation", "Official Robot");
	std::cout << form->getName() << std::endl;
	delete form;
	form = toni.makeForm("robotomy request", "Official Robot");
	std::cout << form->getName() << std::endl;
	delete form;
	form = toni.makeForm("presidential pardon", "Official Presi");
	std::cout << form->getName() << std::endl;
	delete form;

	return 0;
}
