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
            template<typename InputIterator>
            void addNumbers(InputIterator begin, InputIterator end);
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
template<typename InputIterator>
 void Span::addNumbers(InputIterator begin,InputIterator end)
{
 while(begin != end){
       addNumber(*begin);
        ++begin;
    }
}

#endif