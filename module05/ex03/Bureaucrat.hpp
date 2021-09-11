/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 09:56:31 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 18:47:43 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat{

    private:
        std::string const _name;
        int _grade;
        Bureaucrat();
    
    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const &copy);
        Bureaucrat& operator=(Bureaucrat const &copy);
        virtual ~Bureaucrat(); 

        std::string get_name() const;
        int get_grade() const;
        
        void increment();
        void decrement();
        void signForm(Form &copy);
        void executeForm(Form &copy);

        class GradeTooHighException : public std::exception{
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowException : public std::exception{
            public:
                virtual const char* what() const throw();
        };
};

std::ostream& operator<<(std::ostream& out, Bureaucrat const &obj);

#endif