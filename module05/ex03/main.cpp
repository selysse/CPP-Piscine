/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:58:15 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 19:35:16 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "Intern.hpp"

int		main(void) 
{
	Intern intern;

	Form	*robotomy = intern.makeForm("Alex", "Robot");
	robotomy = intern.makeForm("robotomy request", "Robot");

	Form	*shrubbery = intern.makeForm("shrubbery creation", "Home");

	Form	*president = intern.makeForm("presidential pardon", "Bill");

	Bureaucrat a("Jack", 1);

	a.signForm(*president);
	a.executeForm(*president);
	std::cout << *shrubbery << *president << std::endl;

	delete robotomy;
	delete shrubbery;
	delete president;

	return 0;
}