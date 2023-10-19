#include "Base.hpp"

//dinamyc_castermette di eseguire controlli di tipo e di convertire in modo sicuro puntatori o riferimenti di classi base in classi derivate durante l'esecuzione del programma. 
Base *Base::generate(void)
{
    std::srand(std::time(nullptr));
    int random = std::rand() % 3;
    if(random == 0)
        return (new A);
    else if(random == 1)
        return (new B);
    else
        return (new C);
}

void Base::identify(Base *p){

if (dynamic_cast<A*> (p))
		std::cout << "type A" << std::endl;
	else if (dynamic_cast<B*> (p))
		std::cout << "type B" << std::endl;
	else if (dynamic_cast<C*> (p))
		std::cout << "type C" << std::endl;
	else
		std::cout << "none of this type has beeen created" << std::endl;
}
void	Base::identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "type A" << std::endl;
		(void)a;
	}
	catch(const std::exception& e){}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "type B" << std::endl;
		(void)b;
	}
	catch(const std::exception& e){}
	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "type C" << std::endl;
		(void)c;
	}
	catch(const std::exception& e){}
}