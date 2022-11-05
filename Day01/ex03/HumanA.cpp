/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:25:04 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/05 10:20:16 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &myWeap): name(name), WeapRef(myWeap)
{
}
        
void HumanA::attack() {
    std::cout << this->name << " attacks with their " << this->WeapRef.getType() << std::endl;
}