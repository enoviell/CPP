#include "Serializer.hpp"
#include <iostream>

int main(void)
{
	Data	obj;
	obj.data = 42;
    std::cout << "Address of original object (obj): " << &obj << std::endl;
	uintptr_t ptrSer = Serializer::serialize(&obj);
	std::cout << "ptrSer: " << ptrSer << std::endl;
	Data* ptrDes = Serializer::deserialize(ptrSer);
	std::cout << "ptrDes: " << ptrDes << std::endl;
	return (0);
}