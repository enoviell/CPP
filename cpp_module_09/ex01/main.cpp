#include "RPN.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Usage: ./RPN \"expression\"" << std::endl;
        return 1;
    }

    RPN rpn;
    rpn.ordering(argv[1]); 
   //long int result = rpn.getResult();
   rpn.getResult();
    std::cout << rpn.getResult() << std::endl;
    return 0;
}
