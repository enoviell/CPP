#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
    public:
            Span();
            Span(unsigned int N);
            ~Span();
            Span &operator=(const Span &copy);
            Span(const Span &copy);
            void addNumber(int number);
            int shortestSpan();
            int longestSpan();
    public: 
            class Elementexception:public std::exception
            {
                virtual const char *what()const throw()
                {
                    return "Error: to many elementss";
                }
            };
    private:
        unsigned int _N;
        std::vector<int> vector;
};
#endif