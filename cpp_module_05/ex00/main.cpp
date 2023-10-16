#include "bureaucrat.hpp"

int main()
{
	Bureaucrat test("jack", 1);

	std::cout << test.getName() << " = " << test.getGrade() << std::endl;
	test.operator++(test.getGrade());
}