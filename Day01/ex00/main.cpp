/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:36:59 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/08 09:49:16 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    
    Zombie myZombie("karim");
    Zombie *Z;
    myZombie.announce();
    Z = myZombie.newZombie("NewZombie");
    myZombie.randomChump("Random");
    delete Z;
    return 0;
}
