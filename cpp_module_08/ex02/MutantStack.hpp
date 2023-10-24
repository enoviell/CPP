#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
            MutantStack<T>(){return;}
            ~MutantStack<T>() { return; }
            MutantStack<T>(const MutantStack &copy){*this = copy;}
            MutantStack<T> &operator=(const MutantStack<T> &copy)
            {
                if(this != &copy)
                    this->c = copy.c;
                return *this;
            }
           typedef typename std::stack<T>::container_type::iterator iterator; // Definizione di iterator per attraversare il contenitore sottostante di std::stack
            iterator begin(){ return this->c.begin();};
            iterator end(){ return this->c.end();}
};



















#endif