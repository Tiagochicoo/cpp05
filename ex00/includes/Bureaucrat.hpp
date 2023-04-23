/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 09:46:57 by tpereira          #+#    #+#             */
/*   Updated: 2023/04/23 11:05:22 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	private:
		std::string const	_name;
		unsigned int		_grade;

	public:

		Bureaucrat();
		Bureaucrat(int grade);
		Bureaucrat(std::string name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );

		class Bureaucrat GradeTooHighException : public std::exception
		{
			public:
				virtual const char* tooHigh
			
		};
		class Bureaucrat GradeTooLowException : public std::exception
		{

		};

		void	incrementGrade();
		void	decrementGrade();

		std::string	const	getName() const;
		unsigned int		getGrade() const;
};



std::ostream &			operator<<( std::ostream & o, Bureaucrat const & i );

#endif /* ****************************************************** BUREAUCRAT_H */