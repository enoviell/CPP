/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:44:21 by emanuele          #+#    #+#             */
/*   Updated: 2023/09/24 11:49:24 by emanuele         ###   ########.fr       */
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
    static const int _bit;
public:
    Fixed();
    Fixed(Fixed& cpy);
    Fixed& operator=(const Fixed& fixed);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif 