/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 18:10:29 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 18:52:27 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const &copy)
{
    (void)copy;
}

Intern& Intern::operator=(Intern const &src)
{
    (void)src;
    return (*this);
}

Intern::~Intern()
{
}

Form* makeShrubberyForm(std::string const target)
{
    Form* tmp = new ShrubberyCreationForm(target);
    return tmp;
}

Form* makeRobotomyForm(std::string const target)
{
    Form* tmp = new RobotomyRequestForm(target);
    return tmp;
}

Form* makePresidentialForm(std::string const target)
{
    Form* tmp = new PresidentialPardonForm(target);
    return tmp;
}

Form* Intern::makeForm(std::string const name, std::string const target)
{
    std::string names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    Form*(*forms[3])(std::string const);

    forms[0] = makeShrubberyForm;
    forms[1] = makeRobotomyForm;
    forms[2] = makePresidentialForm;
    for (int i = 0; i < 3; i++)
    {
        if (names[i] == name)
            return (forms[i](target));
    }
    std::cout << "Form name was not recognized" << std::endl;
    return NULL;
}
