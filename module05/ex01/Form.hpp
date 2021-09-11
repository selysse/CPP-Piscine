/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:56:31 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 05:39:50 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		Form();
		const std::string	_name;
		bool				_signed;
		const int			_signing_grade;
		const int			_executing_grade;

	public:

		Form (std::string name, int signing_grade, int executing_grade);
		Form( Form const &copy);
		Form &operator=(Form const &copy);
		virtual ~Form();

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
		class AlreadySigned : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};

		std::string		get_name() const;
		bool			get_signature_status() const;
		int				get_signing_grade() const;
		int				get_executing_grade() const;

		void			beSigned(Bureaucrat const &bureaucrat);
};

std::ostream &operator<<( std::ostream & out, Form const &obj);

#endif