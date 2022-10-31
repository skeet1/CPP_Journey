/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 10:10:02 by mkarim            #+#    #+#             */
/*   Updated: 2022/10/31 10:31:31 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
    // int i;
    // Zombie *zombie[N];

    // i = 0;
    // while (i < N)
    // {
    //     zombie[i] = new Zombie(name);
    //     if (!zombie[i])
    //         return (zombie[i]);
    //     i++;
    // }
    // return (zombie[0]);

    Zombie* zmbs = new Zombie[N];
}