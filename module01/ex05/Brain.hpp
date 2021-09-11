/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 20:09:45 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/15 00:18:17 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <cstdio>

class Brain
{
private:
	int	iq;

public:
	Brain(int iq);
	~Brain();
	void	generateIdea()const;
	std::string identify()const;
};

#endif
