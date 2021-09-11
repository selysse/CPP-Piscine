/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gselyse <gselyse@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 02:23:44 by gselyse           #+#    #+#             */
/*   Updated: 2021/01/25 15:51:33 by gselyse          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:

		int					value;
		static const int	bits = 8;

	public:

		Fixed();
		Fixed(const Fixed &s);
		Fixed &operator=(const Fixed &s);
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		~Fixed();

};

#endif