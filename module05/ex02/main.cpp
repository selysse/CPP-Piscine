/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:58:15 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 19:33:41 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

int main()
{
    std::srand(std::time(NULL));
    Bureaucrat Alex("Alex", 1);
    Bureaucrat John("John", 150);
    ShrubberyCreationForm one("one");
    ShrubberyCreationForm two("two");

    Alex.signForm(one);
    Alex.executeForm(two);
    John.executeForm(one);
    try
    {
        two.execute(Alex);
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }
    try
    {
        one.execute(John);
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }


    std::cout << std::endl;
    RobotomyRequestForm three("three");
    PresidentialPardonForm four("four");
    Alex.signForm(three);
    Alex.executeForm(four);
    Alex.executeForm(four);
    John.executeForm(three);
    try
    {
        four.execute(Alex);
    }
    catch(std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try{
        three.execute(John);
    }
    catch(std::exception& ex){
        std::cout << ex.what() << std::endl;
    }
    std::cout << Alex << John << std::endl;
    return 0; 
}