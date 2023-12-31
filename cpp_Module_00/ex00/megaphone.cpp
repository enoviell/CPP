/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 12:00:37 by emanuele          #+#    #+#             */
/*   Updated: 2023/10/03 10:41:14 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main(int ac, char **av)
{
    if(ac == 1){
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
        return 0;
    }
    for(int i=1; i<ac; i++){
        for(size_t j=0; j< strlen(av[i]); j++){
            std::cout<<(char)std::toupper(av[i][j]);
        }
            std::cout<<" ";
    }
    std::cout<<" \n";
    return 0;
}