/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:37:07 by mkarim            #+#    #+#             */
/*   Updated: 2022/10/31 09:35:44 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string name )
{
    Zombie* newZombie = new Zombie(name);
    if (!newZombie)
        return newZombie;
    newZombie->announce();
    return newZombie;
}