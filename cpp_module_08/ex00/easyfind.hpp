#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <iostream>
# include <vector>
# include <list>
# include <deque>

template <typename T>
int easyfind(T container, int n)
{
    std::vector<int>::iterator it;
    it = std::find(container.begin(), container.end(), n);
    if(it != container.end())
    {
        std::cout << "Found: " << *it << std::endl;
        return (1);
    }else
    {
        std::cerr << "Error: " << n << " not found" << std::endl;
        return(-1);
    }
}











#endif