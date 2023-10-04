/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:03:44 by emanuele          #+#    #+#             */
/*   Updated: 2023/09/19 14:22:20 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
int main()
{
std::string string = "HI THIS IS BRAIN";
std::string* stringPTR = &string;
std::string& stringREF = string;

std::cout<< "memory address of string "<< &string << std::endl;
std::cout<< "memory address of stringPTR "<< stringPTR << std::endl;
std::cout<< "memory address of stringREF "<< &stringREF << std::endl;

std::cout<< string << std::endl;
std::cout<< *stringPTR << std::endl;
std::cout<< stringREF << std::endl;
return 0;
}