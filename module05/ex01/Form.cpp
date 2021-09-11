/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:56:31 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 19:46:06 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _signed(false), _signing_grade(150), _executing_grade(150)
{

}

Form::Form (std::string name, int signing_grade, int executing_grade): _name(name), _signed(0), _signing_grade(signing_grade), _executing_grade(executing_grade)
{
	if (_signing_grade < 1 || _executing_grade < 1)
		throw GradeTooHighException();
	if (_signing_grade > 150 || _executing_grade > 150)
		throw GradeTooLowException();
}

Form::Form(const Form &copy)
:_name(copy.get_name()), _signed(copy.get_signature_status()), _signing_grade(copy.get_signing_grade()), _executing_grade(copy.get_executing_grade())
{
}

Form::~Form()
{
}

Form &Form::operator=(Form const &copy)
{
	_signed = copy.get_signature_status();
	return (*this);
}

std::ostream &operator<<(std::ostream & out, Form const &obj)
{
	out << "Form " << obj.get_name() << " requires:" << std::endl << "- a " << obj.get_signing_grade() << " grade to be signed;" << std::endl << "- a " << obj.get_executing_grade() << " grade to be executed;" << std::endl;
	if (obj.get_signature_status())
		out << "It has already been signed" << std::endl;
	else
		out << "It has not been signed yet" << std::endl;
	return (out);
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("the score is is too low");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("the score is too high");
}

const char *Form::AlreadySigned::what() const throw()
{
	return ("the form is already signed");
}

void			Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.get_grade() > _signing_grade)
		throw Bureaucrat::GradeTooLowException();
	else if (_signed)
		throw AlreadySigned();
	else
	{
		std::cout << bureaucrat.get_name() << " signs form " << this->get_name() <<  std::endl;
		_signed = true;
	}
}

std::string		Form::get_name() const
{
	return (_name);
}

bool			Form::get_signature_status() const
{
	return (_signed);
}

int				Form::get_signing_grade() const
{
	return (_signing_grade);
}

int				Form::get_executing_grade() const
{
	return (_executing_grade);
}
