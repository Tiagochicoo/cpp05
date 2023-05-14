/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpereira <tpereira@42Lisboa.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 19:56:08 by tpereira          #+#    #+#             */
/*   Updated: 2023/05/10 19:33:59 by tpereira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class AForm
{
	private:
		std::string const	_name;
		bool				_signed;
		unsigned int const	_minSignGrade;
		unsigned int const	_minExecGrade;

	protected:
		virtual void formFunction() const = 0;

	public:

		AForm();
		AForm(std::string name, int minSignGrade, int minExecGrade);
		AForm( AForm const & src );
		virtual ~AForm() = 0;

		AForm &		operator=( AForm const & rhs );

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Grade is too high!";
				};
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Grade is too low!";
				};
		};

		std::string	const	getName() const;
		bool				getSigned() const;
		unsigned int		getMinSignGrade() const;
		unsigned int		getMinExecGrade() const;
		void				beSigned(Bureaucrat &bureaucrat);
};

std::ostream &			operator<<( std::ostream & o, AForm const & i );

#endif /* ************************************************************ AFORM_H */