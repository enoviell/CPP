/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:12:46 by emanuele          #+#    #+#             */
/*   Updated: 2023/09/21 15:36:18 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl(){
    
};

Harl::~Harl(){
    
};

void Harl::debug(){

    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
    
}

void Harl::info(){
    
    std::cout<< " I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!  "<<std::endl;

}

void Harl::warning(){
    std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;;
}

void Harl::error(){
    std::cout<<"This is unacceptable! I want to speak to the manager now"<<std::endl;;
}

void Harl::complain(std::string level)
{
    int i = 0;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    void(Harl::*complain[4])(void) = {&Harl::debug,&Harl::error,&Harl::warning, &Harl::info};

    while(i<4)
    {
        if(level == levels[i])
            (this->*complain[i])();
        i++;
        
    }
    
}