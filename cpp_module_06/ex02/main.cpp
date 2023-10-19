#include "Base.hpp"

int	main()
{
	Base *one = Base::generate();
	Base *two = Base::generate();
	Base *three =Base::generate();
	Base *four =Base::generate();


	std::cout << "one * = ";
	one-> identify(one);
	std::cout << "one & = ";
	 one->identify(*one);

	std::cout << "two * = "; two->identify(two);
	std::cout << "two & = "; two->identify(*two);

	std::cout << "three * = "; three->identify(three);
	std::cout << "three & = "; three->identify(*three);

	std::cout << "four * = "; four->identify(four);
	std::cout << "four & = "; four->identify(*four);

	delete one;
	delete two;
	delete three;
	delete four;

}