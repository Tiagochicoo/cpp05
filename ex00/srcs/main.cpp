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

int main(void)
{
    Bureaucrat bur("Amelia", 150);
    std::cout << bur.getName() << std::endl;
    std::cout << bur.getGrade() << std::endl;

    std::cout << "--------------------" << std::endl;

    Bureaucrat other("Maria", 1);
    std::cout << other.getName() << std::endl;
    std::cout << other.getGrade() << std::endl;

    std::cout << "-----TO HIGH---------------" << std::endl;

    try 
    {
        Bureaucrat other_bur("Olga", 151);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }

    std::cout << "------TO LOW--------------" << std::endl;

    try 
    {
        Bureaucrat other_bur("Graça", 0);
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }

    std::cout << "--------------------" << std::endl;

    try 
    {
        Bureaucrat other_bur("Linda", 5);
        std::cout << other_bur.getName() << std::endl;
        std::cout << other_bur.getGrade() << std::endl;
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }

    std::cout << "------DECREMENT--------------" << std::endl;

    try 
    {
        bur.decrementGrade();
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    std::cout << bur.getGrade() << std::endl;

    std::cout << "-------INCREMENT-------------" << std::endl;

    try 
    {
        bur.incrementGrade();
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    std::cout << bur.getGrade() << std::endl;

    std::cout << "--------INCREMENET------------" << std::endl;

    try 
    {
        other.incrementGrade();
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    std::cout << other.getGrade() << std::endl;

    std::cout << "-------DECREMENT-------------" << std::endl;

    try 
    {
        other.decrementGrade();
    }
    catch (std::exception &error)
    {
        std::cout << error.what() << std::endl;
    }
    std::cout << other.getGrade() << std::endl;

    std::cout << "--------------------" << std::endl;

    std::cout << bur << std::endl;
    
    std::cout << "--------------------" << std::endl;
    
    return (0);
}
