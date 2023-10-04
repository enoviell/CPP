/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 14:25:23 by emanuele          #+#    #+#             */
/*   Updated: 2023/10/03 11:56:59 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int main(void)
{
    Phonebook phonebook;
    Contact contact;

    while(42)
    {
        std::cout<<"Enter a command: ADD or SEARCH or EXIT"<<std::endl;
        std::string command;
        std::cin>>command;

        if(command == "ADD")
        {
            std::cout << "Enter first name: "<<std::endl;
            std::cin >>contact._firstName;
            std::cout << "Enter last name: ";
            std::cin >> contact._lastName;
            std::cout << "Enter nickname: ";
            std::cin >> contact._nickname;
            std::cout << "Enter darkest secret: ";
            std::cin >> contact._darkestSecret;
            std::cout << "Enter phone number: ";
            std::cin >> contact._phoneNumber;
            phonebook.addContact(contact);
        }
        else if(command == "SEARCH")
        {
            phonebook.printContacts();
            std::cout << "Enter contact id: ";
            int id;
            std::cin >> id;
            phonebook.searchContact(id);
        }
        else if(command == "EXIT")
        {
            break;
        }
        else
        {
            std::cout << "Invalid command" << std::endl;
        }
    }
    return (0);
}