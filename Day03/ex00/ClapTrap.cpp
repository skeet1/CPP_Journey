/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 08:02:11 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/14 10:29:10 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default Constructor Called\n";
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "Constructor Called\n";
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
    std::cout << "Copy Constructor Called\n";
    *this = obj;
}

ClapTrap &ClapTrap::operator=(ClapTrap const& obj) {
    this->_name = obj._name;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor Called\n";
}

void    ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing 1 points of damage!\n";
    _energyPoints--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " take damage of " << amount << " points\n";
    _attackDamage += amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " be repaired with " << amount << " points\n";
    _hitPoints += amount;
    _energyPoints += amount;
}