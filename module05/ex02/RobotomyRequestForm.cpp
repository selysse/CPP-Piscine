/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestAForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:12:35 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 07:26:43 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45, "")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string _target) : Form("RobotomyRequestForm", 72, 45, _target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy)
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=( RobotomyRequestForm const &copy)
{
	if ( this != &copy)
		Form::operator=(copy);
	return (*this);
}


RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const{
    if (!(this->getIsSigned()))
        throw Form::FormNotSignedException();
    if (executor.get_grade() > this->get_executing_grade())
        throw Form::GradeTooLowToExecException();
    if ((std::rand() % 2) == 1)
        std::cout << "Success!! " << this->get_target() << " has been robotomized!" << std::endl;
    else
        std::cout << "Failure! " << this->get_target() << " wasn't robotomized!" << std::endl; 
}
