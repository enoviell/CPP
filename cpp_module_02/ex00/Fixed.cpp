/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:05:27 by emanuele          #+#    #+#             */
/*   Updated: 2023/09/25 11:02:20 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bit = 8;

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;

    return (this->_fixedp);
}

void Fixed::setRawBits(int const raw) {
   this-> _fixedp = raw;
   return;
}

Fixed::Fixed() : _fixedp(0)
{
    std::cout<< "Default constructor called" << std::endl;
    return;

}

Fixed::Fixed(Fixed &cpy)
{
     std::cout << "Copy constructor called" << std::endl;
    this->_fixedp = cpy.getRawBits();
    return;
}

Fixed::~Fixed()
{
        std::cout<< "Deconstractor called" << std::endl;
        return;
}

Fixed& Fixed::operator=(Fixed const& fixed){
	std::cout << "Copy assignment operator called" << std::endl;
    if(this==&fixed)
        return*(this);
     this->_fixedp=fixed.getRawBits();
     return*(this);
}

