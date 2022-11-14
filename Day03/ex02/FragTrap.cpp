/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:47:40 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/14 15:42:31 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap Default Constructor Called\n";
}

FragTrap::FragTrap(std::string name)
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap Copy Constructor Called\n";
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    std::cout << "FragTrap Copy Assignement Operator Called\n";
    this->_name = obj._name;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor Called\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "High Fives\n";
}