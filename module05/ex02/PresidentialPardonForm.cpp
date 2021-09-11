/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonAForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:52:35 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 07:26:16 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5, "")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5, target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form(copy)
{
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const &copy)
{
    Form::operator=(copy);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!(this->getIsSigned()))
        throw Form::FormNotSignedException();
    if (executor.get_grade() > this->get_executing_grade())
        throw Form::GradeTooLowToExecException();
    std::cout << this->get_target() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
