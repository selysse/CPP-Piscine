/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:52:35 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 19:45:00 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name): _name(name)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy): _name(copy.get_name()), _grade(copy.get_grade())
{
	*this = copy;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy)
{

	_grade = copy.get_grade();
	return (*this);
}


std::ostream &operator<<( std::ostream & out, Bureaucrat const &obj)
{
	out << obj.get_name() << ", bureaucrat grade " << obj.get_grade() << std::endl;
	return out;
}

void	Bureaucrat::increment()
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException(); 
	std::cout << _name << " increases the rating" << std::endl;
	_grade--;
}

void	Bureaucrat::decrement()
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << _name << " downgrades the rating" << std::endl;
	_grade++;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("The rating is too low");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("The rating is too high");
}

void		Bureaucrat::signForm(Form &form)const
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception &e)
	{
		std::cerr << "Bureaucrat " << _name << " cannot sign " << form.get_name() << " because " << e.what() << std::endl;
	}
	
}

std::string		Bureaucrat::get_name() const
{
	return (_name);
}

int				Bureaucrat::get_grade() const
{
	return (_grade);
}