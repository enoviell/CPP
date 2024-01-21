//
// Created by emanu on 20/01/2024.
//

#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <vector>
#include <deque>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <sys/time.h>
#include <stdlib.h>
#include <iomanip>



// Fusione in-place di due sottoarray ordinati
template<typename T>
void merge_in_place(T &array, int sx, int median, int dx)
{
    int i = sx, j = median + 1, k = sx;

    while (i <= median && j <= dx) {
        if (array[i] <= array[j]) {
            array[k] = array[i];
            i++;
        } else {
            array[k] = array[j];
            j++;
        }
        k++;
    }

    // Copia gli elementi rimanenti del sottoarray sinistro
    while (i <= median) {
        array[k] = array[i];
        i++;
        k++;
    }

    // Copia gli elementi rimanenti del sottoarray destro
    while (j <= dx) {
        array[k] = array[j];
        j++;
        k++;
    }
}

template<typename T>
void insectionsort(T& num, int sx, int dx)
{
    for(int i= sx+1; i<= dx; i++){
        int k = num[i];
        int j = i - 1 ;

        while(j >= sx && num[j] > k){
            num[j+1] = num[j];
            j--;
        }
        num[j + 1] = k;
    }
}

template<typename T>
void mergeinsection(T &array, int sx, int dx, int k)
{
    if(sx < dx)
    {
        // Caso base: sottoarray di dimensione <= k ordinato da insection
        if(dx - sx <= k)
            insectionsort(array, sx, dx);
            // Caso ricorsivo: sottoarray di dimensione > k
        else
        {
            int median = sx + (dx - sx) / 2;
            mergeinsection(array, sx, median, k);
            mergeinsection(array, median + 1, dx, k);
            merge_in_place(array, sx, median, dx);
        }
    }
}


template <typename T>
int	sorted(T &num)
{
    int i = -1;

    while ((unsigned int)++i < num.size() - 1)
    {
        if (num[i] > num[i + 1])
            return (0);
    }
    return (1);
}

class PmergeMe
{
private :
    std::vector<int> vettor;
    std::deque<int> lista;
    double  start, end;

public :
    PmergeMe();
    ~PmergeMe();
    PmergeMe(char **argv);
    PmergeMe(const PmergeMe &copy);
    PmergeMe &operator=(const PmergeMe &copy);
    void sort_4_vettor();
    void sort_4_deque();
    double Time(void);
};

#endif
