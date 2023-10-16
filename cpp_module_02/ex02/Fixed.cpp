/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 18:05:27 by emanuele          #+#    #+#             */
/*   Updated: 2023/10/06 10:57:08 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(void)
{
    std::cout<< "Default constructor called" << std::endl;
    this->_fixedp = 0;
    return;

}
Fixed::Fixed( const float nbr)
{
	std::cout << "Float to fixed constructor called" << std::endl;
	this->_fixedp = roundf(nbr * (1 << this->_bits_nbr));
}

Fixed::Fixed(const int nbr)
{
	std::cout << "Int to fixed constructor called" << std::endl;
	this->_fixedp = nbr << this->_bits_nbr;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;

    return (this->_fixedp);
}

void Fixed::setRawBits(int const raw) {
   this-> _fixedp = raw;
   return;
}

Fixed::Fixed(const Fixed &cpy)
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

Fixed& Fixed::operator=(Fixed const& cpy){
	std::cout << "Copy assignment operator called" << std::endl;
    if(this==&cpy)
        return*(this);
     this->_fixedp=cpy.getRawBits();
     return*(this);
}

int Fixed::toInt(void) const
{
    return(this->getRawBits()>>this-> _bits_nbr);
}
float Fixed::toFloat(void)const{
    return(float)(this->getRawBits())/(1<<_bits_nbr);
    
}

std::ostream& operator<<(std::ostream& os, const Fixed& nbr) {
    os << nbr.toFloat();
    return os;
}


bool Fixed::operator>(const Fixed &compare) const
{
    return (this->getRawBits()>compare.getRawBits());
}

bool Fixed::operator<(const Fixed &compare)const{

    return(this->getRawBits()<compare.getRawBits());
}

bool Fixed::operator>=(const Fixed &compare)const{
    return(this->getRawBits()>=compare.getRawBits());
};

bool Fixed::operator!=(const Fixed &compare)const{
    return(this->getRawBits()!=compare.getRawBits());
};
bool Fixed::operator==(const Fixed &compare)const{
    return(this->getRawBits()==compare.getRawBits());
};

Fixed Fixed::operator+(const Fixed &add)const{
    
    return(this->toFloat() +add.toFloat());
}

Fixed Fixed::operator-(const Fixed&sub)const{
    return(this->toFloat()-sub.toFloat());
}

Fixed Fixed::operator*(const Fixed&molt)const{
    return(this->toFloat()*molt.toFloat());
}
Fixed Fixed::operator/(const Fixed &div)const{
    return(this->toFloat()/div.toFloat());
}
Fixed				&Fixed::operator++(int )
{
	this->_fixedp++;
	return (*this);
};

Fixed				Fixed::operator++(int)
{
	Fixed	tmp(*this);
	this->_fixedp++;
	return (tmp);
}

Fixed				&Fixed::operator--(void)
{
	this->_fixedp--;
	return (*this);
}

Fixed				Fixed::operator--(int)
{
	Fixed	tmp(*this);
	this->_fixedp--;
	return (tmp);
}

Fixed		&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed		&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed		&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed		&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}