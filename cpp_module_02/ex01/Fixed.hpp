/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:44:21 by emanuele          #+#    #+#             */
/*   Updated: 2023/09/24 12:41:22 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
class Fixed
{
private:
    int _fixedp;
    static const int _bits_nbr = 8;
public:
    Fixed();
    Fixed(const int nbr);
    Fixed(const float nbr);
    Fixed(const Fixed& cpy);
    Fixed& operator=(const Fixed& cpy);
    ~Fixed();
    int                 getRawBits(void) const;
    void                setRawBits(int const raw);
    int                 toInt(void) const;
    float				toFloat(void) const;
		

};
std::ostream &operator<<(std::ostream &os, const Fixed &nbr);

#endif 