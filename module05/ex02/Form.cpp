/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 19:16:42 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 19:47:36 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("noname"), _signing_grade(1), _executing_grade(1), _isSigned(false), _target("")
{  
}

Form::Form(std::string name, int signing_grade, int executing_grade, std::string target) : _name(name), _signing_grade(signing_grade), _executing_grade(executing_grade), _isSigned(false),_target(target)
{
	if (_signing_grade < 1 || _executing_grade < 1)
		throw GradeTooLowToExecException();
	if (_signing_grade > 150 || _executing_grade > 150)
		throw GradeTooLowExeception();
}

Form::Form(Form const &copy) : _name(copy._name), _signing_grade(copy._signing_grade), _executing_grade(copy._executing_grade)
{
    *this = copy;
}

Form& Form::operator=(Form const &copy)
{
    this->_isSigned = copy._isSigned;
    this->_target = copy._target;
    return *this;
}

Form::~Form(){}

std::string Form::get_name() const
{
    return this->_name;
}

std::string Form::get_target() const
{
    return this->_target;
}

int Form::get_signing_grade() const
{
    return this->_signing_grade;
}

int Form::get_executing_grade() const
{
    return this->_executing_grade;
}

bool Form::getIsSigned() const
{
    return this->_isSigned;
}


void Form::beSigned(Bureaucrat const &copy)
{
    if (copy.get_grade() > this->_signing_grade)
        throw Form::GradeTooLowExeception();
    this->_isSigned = true;
}


const char* Form::GradeTooHighExeception::what() const throw()
{
    return "The grade is too high";
}

const char* Form::GradeTooLowExeception::what() const throw()
{
    return "The grade is too low";
}

const char* Form::GradeTooLowToExecException::what() const throw()
{
    return "The grade is too low to execute the form";
}

const char* Form::FormNotSignedException::what() const throw()
{
    return "The form is not signed!";
}

std::ostream &operator<<(std::ostream & out, Form const &obj)
{
	out << "Form " << obj.get_name() << " requires:" << std::endl << "- a " << obj.get_signing_grade() << " grade to be signed;" << std::endl << "- a " << obj.get_executing_grade() << " grade to be executed;" << std::endl;
	if (obj.getIsSigned())
		out << "It has already been signed" << std::endl;
	else
		out << "It has not been signed yet" << std::endl;
	return (out);
}