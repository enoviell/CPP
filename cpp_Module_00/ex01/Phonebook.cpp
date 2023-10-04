/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:54:45 by emanuele          #+#    #+#             */
/*   Updated: 2023/10/03 12:05:53 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
    this->_contactsCount = 0;
    return;
}

Phonebook::~Phonebook(void)
{
    return;
}

void Phonebook::addContact(Contact contact)
{
    if (this->_contactsCount < 8)
    {
        this->contacts[this->_contactsCount] = contact;
        this->_contactsCount++;

    }
    else
        this->contacts[0] = contact;
}
void Phonebook::searchContact(int id)
{
    if(id<=0 || id >8)
    {
    std::cout<<"invalid id"<<std::endl;
    return ;
    }
   std::string first_name = this->contacts[id-1].getFirstName();
   if(first_name.length() > 10)
   {
       first_name.resize(9);
       first_name.append(".");
   }
    std::string last_name = this->contacts[id-1].getLastName();
    if(last_name.length() > 10)
    {
         last_name.resize(9);
         last_name.append(".");
}
    std::string nickname = this->contacts[id-1].getNickname();
    if(nickname.length() > 10)
    {
         nickname.resize(9);
         nickname.append(".");
}
    std::string darkest_secret = this->contacts[id-1].getDarkestSecret();
    if(darkest_secret.length() > 10)
    {
         darkest_secret.resize(9);
         darkest_secret.append(".");
}
    std::string _phone = this->contacts[id-1].getPhoneNumber();
    if(_phone.length() > 10)
    {
            _phone.resize(9);
            _phone.append(".");
    }
        std::cout<< id << std::endl << first_name <<std::endl << last_name << std::endl << nickname << std::endl<< darkest_secret <<std::endl<<_phone <<std::endl;
}

void Phonebook::printContacts()
{
     for(int i=0; i<8; i++)
        std::cout<< i + 1 << " | " << this->contacts[i].getFirstName() << " | " <<this->contacts[i].getLastName() << " | " << this->contacts[i].getNickname()<< std::endl;
}

int Phonebook::getContactsCount(void)
{
    return (this->_contactsCount);
}

