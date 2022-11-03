/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:10:02 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/03 17:40:38 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombies;
    
    if (N <= 0) exit(1);
    zombies = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombies[i].setName(name);
    return zombies;
}