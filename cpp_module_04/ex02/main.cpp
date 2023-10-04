#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal *animals[30];
	for (int i = 0; i < 30; i++)
	{
		if (i < 15)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	(animals[0]->getBrain()).setIdea(0,"boh");
	std::cout << "First cat first idea: " << (animals[0]->getBrain()).getIdea(0) << std::endl;
	for (int i = 1; i < 30; i++)
		std::cout << i << " animal first idea: " << (animals[i]->getBrain()).getIdea(0) << std::endl;
	for (int i = 0; i < 30; i++)
		delete animals[i];
	return (0);
}

