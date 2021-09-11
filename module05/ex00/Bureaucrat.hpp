/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:56:31 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 19:19:17 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:

		Bureaucrat();
		Bureaucrat(std::string name);
		Bureaucrat(std::string name, int grade);
		Bureaucrat( Bureaucrat const & copy);
		Bureaucrat &operator=(Bureaucrat const & copy);
		virtual ~Bureaucrat();


		std::string			get_name() const;
		int					get_grade() const;

		void				increment();
		void				decrement();

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};
};

std::ostream &operator<<( std::ostream &out, Bureaucrat const &obj);

#endif