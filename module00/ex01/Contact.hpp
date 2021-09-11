#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
#include <string>
#include <iomanip>

#define RESET   "\033[0m"
#define FRED    "\033[31m"
#define BLUE    "\033[34m"
#define YELLOW  "\033[33m"
#define GREEN   "\033[32m"
#define BGBLUE	"\033[44m"

class Contact
{
private:
    int         _count;
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _login;
    std::string _postal_address;
    std::string _email_address;
    std::string _phone_number;
    std::string _birthday_date;
    std::string _favorite_meal;
    std::string _underwear_color;
    std::string _darkest_secret;

public:
    Contact(void);
    ~Contact(void); 
    void            ft_addContact(int i);
    void            ft_print(void);
    void			searchTable(void);
    std::string		printLine(std::string str);	
};

# endif