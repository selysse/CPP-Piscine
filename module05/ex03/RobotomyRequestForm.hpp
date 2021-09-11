/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestAForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 11:12:35 by gselyse           #+#    #+#             */
/*   Updated: 2021/03/10 07:27:00 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm();	

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm( const RobotomyRequestForm &copy);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &copy);
		virtual ~RobotomyRequestForm();

		virtual void 	execute(Bureaucrat const & executor) const;
};

#endif