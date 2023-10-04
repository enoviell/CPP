#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class Character: public ICharacter{

public:

            Character();
            Character(std::string name);
            Character(const Character &copy);
            Character &operator=(const Character &copy);
             ~Character();
            std::string const &getName() const;
            void equip(AMateria *m);
            void unequip(int idx);
            void use(int idx, ICharacter &target);
            void  clearInventory();
private:
            std::string _name;
            AMateria *_inventory[4];
            AMateria *_unequipped;


};

#endif