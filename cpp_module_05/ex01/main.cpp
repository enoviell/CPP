#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat test("Jack", 1);
    Form prova("Prova", 1, 149);
    Form prova2("Prova2", 15, 50);

    std::cout << "Bureaucrat: " << test.getName() << ", Grade: " << test.getGrade() << std::endl;

    std::cout << "Incrementing grade..." << std::endl;
    test.operator++();
    std::cout << "Bureaucrat: " << test.getName() << ", Grade: " << test.getGrade() << std::endl;

    std::cout << prova << std::endl;
    std::cout << "-------------------" << std::endl;

    std::cout << "Attempting to sign Prova..." << std::endl;
    test.signForm(prova);
    std::cout << "Prova: " << prova << std::endl;
    std::cout << "-------------------" << std::endl;

    std::cout << "Attempting to sign Prova2..." << std::endl;
    test.signForm(prova2);
    std::cout << "Prova2: " << prova2 << std::endl;

    return 0;
}
