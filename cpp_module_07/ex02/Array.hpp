#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <string>

template <typename T>
class Array{
    public:
            Array();
            Array( int n);
            Array(Array const &copy);
            ~Array();
            Array &operator=( Array const &copy);
            T &operator[](int i);
            const T &operator[](int i) const ; //  x elementi const 
            int size() const;
            class outOfBounds : public std::exception{
                public:
                     const char *what() const throw()
                    {
                        return ("Out of bounds");
                    };
            };
            private:
                T *_array;
                int _size;
};


template <typename T>
Array<T>::Array() : _array(0), _size(0) {
}

template <typename T>
Array<T>::Array( int n) : _array(new T[n]), _size(n) {}

template <typename T>
Array<T>::Array(Array<T> const &copy): _array(0), _size(0)
{
    *this=copy;
}

template <typename T>
Array<T>::~Array()
{
    delete[] _array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& copy) {
    if (this != &copy) {
        delete[] _array;
        _size = copy._size;
        _array = new T[_size];
        for (unsigned int i = 0; i < _size; i++) {
            _array[i] = copy._array[i];
        }
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](int i)
{
    if (i >= _size || i<0)
        throw Array<T>::outOfBounds();
    return (this->_array[i]);
}
template <typename T>
const T &Array<T>::operator[](int i) const
{
    if (i >= _size || i<0)
        throw Array<T>::outOfBounds();
    return (this->_array[i]);
}

template <typename T>
int Array<T>::size() const
{
    return (this->_size);
}

#endif


