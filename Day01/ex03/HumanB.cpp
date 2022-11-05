/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:25:09 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/05 10:58:55 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name) {
    this->name = name;
}
        
void HumanB::attack() {
    if (this->WeapPtr != NULL)
        std::cout << this->name << " attacks with their " << this->WeapPtr->getType() << std::endl;
    else
        std::cout << "Sorry! There's no Weapon..." << std::endl;
}

void HumanB::setWeapon(Weapon & myWeap)
{
    this->WeapPtr = &myWeap;
}