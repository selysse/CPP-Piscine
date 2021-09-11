#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;

class Form{

    private:
        std::string const _name;
        int const _signing_grade;
        int const _executing_grade;
        bool _isSigned;
        std::string _target;
        Form();

    public:
        Form(std::string name, int signing_grade, int executing_grade, std::string target);
        Form(Form const &copy);
        Form& operator=(Form const &copy);
        virtual ~Form();

        std::string get_name() const;
        std::string get_target() const;

        int get_signing_grade() const;
        int get_executing_grade() const;
        bool getIsSigned() const;
        void beSigned(Bureaucrat const &copy);
        virtual void execute(Bureaucrat const &executor) const = 0;

        class GradeTooHighExeception : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowExeception : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class GradeTooLowToExecException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
        class FormNotSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw();
        };
};

std::ostream &operator<<( std::ostream & out, Form const &obj);

#endif