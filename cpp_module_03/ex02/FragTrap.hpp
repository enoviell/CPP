#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <unistd.h>
#include<iostream>
#include<string>
#include "ClapTrap.hpp"


class FragTrap: public ClapTrap{

    public:
    FragTrap(void);
    ~FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& fragtrap);
    FragTrap& operator=(const FragTrap& fragtrap);
    void highFivesGuys(void);
    void attack(const std::string &target);

    
    private:

};



#endif