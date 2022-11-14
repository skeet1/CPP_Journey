/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:31:38 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/14 14:53:18 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void ScavTrap::guardGAte()
{
    std::cout << this->_name << " is now in Gate keeper mode\n";
}

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap Default Constructor Called\n";
}

ScavTrap::ScavTrap(std::string name)
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap Constructor Called\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    this->_name = obj._name;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor Called\n";
}


void ScavTrap::attack(const std::string& target)
{
    std::cout << "ScavTrap Attack " << target << std::endl;
}