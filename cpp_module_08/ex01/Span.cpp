#include "Span.hpp"

Span::Span() : _N(0)
{
}

Span::Span(unsigned int N): _N(N)
{
}

Span::~Span()
{
}

Span &Span::operator=(const Span &copy)
{
   if(this != &copy)
   {
    this->_N = copy._N;
    this->vector= copy.vector;
   }
   return *this;
}

Span::Span(const Span &copy)
{
    *this = copy;
}

void Span::addNumber(int number)
{
if(this->vector.size()<this->_N)
    vector.push_back(number);
else
    throw Elementexception();
}

int Span::shortestSpan()
{
    int val;
    if(this->vector.size()<2)
    {
    std::cerr<<"Il vettore deve contenere almeno due numeri per calcolare una distanza." << std::endl;
    return(-1);
    }
    val=std::abs(this->vector[0] - this->vector[1]);
    for(auto it = this->vector.begin(); it != this->vector.end(); ++it)
    {
        if(it +1 != this->vector.end())
        {
            int dist = abs(*it - (*(it +1)));
            if(dist <= val)
            val = dist;
        }
    }
    return val;
}

int Span::longestSpan()
{
    
    int val;
    if(this->vector.size()<2)
    {
    std::cerr<<"Il vettore deve contenere almeno due numeri per calcolare una distanza." << std::endl;
    return(-1);
    }
    val=std::abs(this->vector[0] - this->vector[1]);
    for(auto it = this->vector.begin(); it != this->vector.end(); ++it)
    {
        if(it +1 != this->vector.end())
        {
            int dist = abs(*it - (*(it +1)));// facendo (*it+1) sommavo 1 a it...e quindi non accedevo al elemento
            if(dist >= val)
            val = dist;
        }
    }
    return val;
}
