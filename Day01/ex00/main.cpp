/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:36:59 by mkarim            #+#    #+#             */
/*   Updated: 2022/10/31 09:38:18 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie myZombie("karim");
    myZombie.announce();
    myZombie.newZombie("NewZombie");
    myZombie.randomChump("Random");
	while (1);
}
