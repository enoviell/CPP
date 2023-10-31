#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>

class RPN {
private:
    std::stack<long int> toExecute;

public:
    RPN();
    RPN(const RPN &toCopy);
    RPN& operator=(const RPN &toCopy);
    ~RPN();
    long int getResult();
    void ordering(char *toOrder);
    void executing(char operation);
    class rpnException : public std::exception {
    public:
        const char *what() const throw() {
            return"Error: bad input";
        }
    };
    class InfException : public std::exception{
         public:
        const char *what() const throw() {
            return "∞";
        }
    };
};

#endif
