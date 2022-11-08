/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:37:07 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/07 18:08:24 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie* Zombie::newZombie( std::string name )
{
    Zombie* newZombie = new Zombie(name);
    if (!newZombie)
        return newZombie;
    newZombie->announce();
    return newZombie;
}