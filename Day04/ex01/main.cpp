/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:32:24 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/16 11:28:04 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;//should not create a leak
    delete i;

    int N = 4, ind = 0;
    Animal *animal[N];
    for (; ind < N / 2; ind++)
    {
        animal[ind] = new Cat();
    }
    for (; ind < N; ind++)
    {
        animal[ind] = new Dog();
    }
    for (ind = 0; ind < N; ind++)
    {
        animal[ind]->makeSound();
    }

    for (ind = 0; ind < N; ind++)
        delete animal[ind];
    return 0;
}
