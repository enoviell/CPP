/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:53:54 by emanuele          #+#    #+#             */
/*   Updated: 2023/10/03 11:13:09 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class Phonebook
{
    public:
        Phonebook(void);
        ~Phonebook(void);
        void    addContact(Contact contact);
        void    searchContact(int id);
        int     getContactsCount(void);
        void    printContacts();

    private:
        Contact contacts[8];
        int     _contactsCount;
};


#endif