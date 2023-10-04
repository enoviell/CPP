/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:14:44 by emanuele          #+#    #+#             */
/*   Updated: 2023/10/03 10:50:44 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
    return;
}

Contact:: ~Contact(void)
{
    return;
}
void Contact::setFirstName(std::string firstName)
{
    this->_firstName = firstName;
}
void Contact::setLastName(std::string lastName)
{
    this->_lastName = lastName;
}
void Contact::setNickname(std::string nickName)
{
    this->_nickname = nickName;
}
void Contact::setDarkestSecret(std::string darkestSecret)
{
    this->_darkestSecret = darkestSecret;
}
void Contact::setPhoneNumber(std::string phoneNumber)
{
    this->_phoneNumber = phoneNumber;
}
std::string Contact::getPhoneNumber(void)
{
    return (this->_phoneNumber);
}
std::string Contact::getFirstName(void)
{
    return (this->_firstName);
}
std::string  Contact::getLastName(void)
{
    return (this->_lastName);
}
std::string Contact::getNickname(void)
{
    return (this->_nickname);
}

std::string Contact::getDarkestSecret(void)
{
    return (this->_darkestSecret);
}
