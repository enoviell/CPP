#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>
#include <ctime> // time
#include <cstdlib> // srand


class Base
{
public:
    virtual ~Base(){};
    static Base *generate(void);
    virtual void identify(Base *p);
	 virtual void identify(Base &p);

};


class A : public Base
{
	public:
		~A(){};
			
};

class B : public Base
{
	public:
		~B(){};

	
};
class C : public Base
{
	public:
		~C(){};

	
};












#endif