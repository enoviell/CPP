#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include <unistd.h>
#include<iostream>
#include<string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap:public ScavTrap,public FragTrap{
    public:
    DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &diamondtrap);
    DiamondTrap &operator=(const DiamondTrap &diamondtrap);
    ~DiamondTrap();
    void whoAmI();
  void attack(const std::string &target);
  
    private:
    std::string _name;
};




















#endif