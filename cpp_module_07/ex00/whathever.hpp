/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whathever.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 10:30:38 by emanuele          #+#    #+#             */
/*   Updated: 2023/10/23 10:36:47 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATHEVER_HPP
#define WHATHEVER_HPP
#include <iostream>
#include <string>

template <typename T>

void swap(T &a, T&b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>

T min(T &a, T &b)
{
    if(a >= b)
        return (b);
    else 
        return (a);
}

template <typename T>

T max( T &a, T &b)
{
    if(a <= b)
        return(b);
    else 
        return (a);
}






#endif