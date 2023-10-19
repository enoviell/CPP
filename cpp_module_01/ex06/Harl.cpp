/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 12:12:46 by emanuele          #+#    #+#             */
/*   Updated: 2023/10/17 18:24:02 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


Harl::Harl(){
    
};

Harl::~Harl(){
    
};

void Harl::debug(){

    std::cout<<"[DEBUG]"<<std::endl;
    std::cout<<"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<<std::endl;
    
}

void Harl::info(){

     std::cout<<"[INFO]"<<std::endl;
    std::cout<< " I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!  "<<std::endl;

}

void Harl::warning(){
    
    std::cout<<"[WARNING]"<<std::endl;
    std::cout<<"I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."<<std::endl;;
}

void Harl::error(){
    
    std::cout<<"[ERROR]"<<std::endl;
    std::cout<<"This is unacceptable! I want to speak to the manager now"<<std::endl;;
}

void Harl::complain(std::string level)
{
    int k = -1;
    int flag=0;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
   for(int i = 0; i<4; i++)
   {
    for(unsigned long j=0; j<level.size();j++)
    {
        if(level == levels[i])
        {k =    i;
           flag=1;
           }
    }
   }
   if(flag==0)
   {
        std::cout<<"INSERT VALID LEVEL"<<std::endl;
   }

   while (k < 4 && flag == 1)
   {
       switch (k)
       {

       case 0:
           debug();
           k++;
           continue;
       case 1:
           info();
           k++;
           continue;
       case 2:
           warning();
           k++;
           continue;
       case 3:
           error();
           k++;
           break;
       default:
           break;
       }
    }
}
