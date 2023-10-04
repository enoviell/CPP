#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <unistd.h>
#include<iostream>
#include<string>
#include "ClapTrap.hpp"


class FragTrap: public virtual ClapTrap{

    public:
    FragTrap(void);
    ~FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& fragtrap);
    FragTrap& operator=(const FragTrap& fragtrap);
    void highFivesGuys(void);
    void attack(ClapTrap &target);
    
    private:

};



#endif