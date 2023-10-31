#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &toCopy) {
    toExecute = toCopy.toExecute;
}

RPN& RPN::operator=(const RPN &toCopy) {
    if (this != &toCopy) {
        toExecute = toCopy.toExecute;
    }
    return *this;
}

RPN::~RPN() {}
long int RPN::getResult() {
        return toExecute.top();
}

void RPN::ordering( char *toOrder) {
    try {
        while (*toOrder != '\0') {
            if (*toOrder >='0' && *toOrder <='9' && *(toOrder+1) == ' ') {
                toExecute.push(atoi(toOrder));
                while (*toOrder >='0' && *toOrder <='9') {
                    ++toOrder;
                }
            } else if (*toOrder == '+' || *toOrder == '-' || *toOrder == '*' || *toOrder == '/') {
                executing(*toOrder);
            } else if (*toOrder == ' ') {
                continue;
            } else {
                throw rpnException();
            }
            ++toOrder;
        }
    } catch (rpnException &e) {
        std::cerr << e.what() << std::endl;
        exit(1);
    }
}

void RPN::executing(char operation) {
    try {
        if (toExecute.size() != 2) {
            throw rpnException();
        } else {
            int i = toExecute.top();
            toExecute.pop();
            int j = toExecute.top();
            toExecute.pop();

            switch (operation) {
                case '+':
                    toExecute.push(j + i);
                    break;
                case '*':
                    toExecute.push(j * i);
                    break;
                case '-':
                    toExecute.push(j - i);
                    break;
                case '/':
                    if (i == 0) {
                    throw InfException();
                    }
                    else 
                        toExecute.push(j / i);
                    break;
                default:
                    throw rpnException();
            }
        }
    } catch (rpnException &e) {
        std::cerr << e.what() << std::endl;
        exit(1);
    }
    catch (InfException &e){
        std::cout<<e.what()<<std::endl;
        exit(0);
    }
}
