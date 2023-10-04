/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:09:42 by emanuele          #+#    #+#             */
/*   Updated: 2023/09/01 14:48:39 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    public:
     Contact(void);
        ~Contact(void);
        void    setFirstName(std::string firstName);
        void    setLastName(std::string lastName);
        void    setNickname(std::string nickname);
        void    setDarkestSecret(std::string darkestSecret);
        void    setPhoneNumber(std::string phoneNumber);
    std::string    getFirstName(void);
    std::string    getLastName(void);
    std::string   getNickname(void);
    std::string    getDarkestSecret(void);
    std::string    getPhoneNumber(void);

    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _darkestSecret;
    std::string _phoneNumber;
};

#endif
