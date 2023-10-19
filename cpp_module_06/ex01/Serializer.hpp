#ifndef SERIALIZER_HPP_
#define SERIALIZER_HPP_

#include <iostream>
#include <string>


    struct Data{
        int data;
        int* ptr;
    };
class Serializer {

public:
    

    Serializer();
    Serializer(const Serializer &src);
    ~Serializer();
    Serializer &operator=(const Serializer &copy);
    static uintptr_t serialize(Data *ptr);
    static Data* deserialize(uintptr_t raw);

};



#endif