/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:52:35 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 19:49:43 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("default bureaucrat"), _grade(150)
{
};

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) : _name(copy._name)
{
    *this = copy;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &copy)
{
    this->_grade = copy._grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
}

void Bureaucrat::increment(){
    if (_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    std::cout << _name << " increases the rating" << std::endl;
    _grade--;
}

void Bureaucrat::decrement()
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << _name << " downgrades the rating" << std::endl;
	_grade++;
}

void Bureaucrat::signForm(Form &copy)
{
	try
	{
		copy.beSigned(*this);
	}
	catch(const std::exception &e)
	{
		std::cerr << "Bureaucrat " << _name << " cannot sign " << copy.get_name() << " because " << e.what() << std::endl;
	}
	
}

void Bureaucrat::executeForm(Form &copy)
{
    if (!(copy.getIsSigned())){
        std::cout << this->_name << " cannot execute " << copy.get_name() << " because the form is not signed" << std::endl;
        return ;
    }
    if (this->_grade > copy.get_executing_grade()){
        std::cout << this->_name << " cannot execute " << copy.get_name() << " because " << this->_name << "'s grade is too low" << std::endl;
        return ;
    }
    std::cout << this->_name << " executes " << copy.get_name() << std::endl;
    copy.execute(*this);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The rating is too low");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The rating is too high");
}

std::string		Bureaucrat::get_name() const
{
	return (_name);
}

int				Bureaucrat::get_grade() const
{
	return (_grade);
}

std::ostream &operator<<( std::ostream & out, Bureaucrat const &obj)
{
	out << obj.get_name() << ", bureaucrat grade " << obj.get_grade() << std::endl;
	return out;
}
