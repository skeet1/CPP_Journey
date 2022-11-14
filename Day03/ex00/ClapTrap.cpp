/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 08:02:11 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/14 13:26:55 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default Constructor Called\n";
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap Constructor Called\n";
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
    std::cout << "ClapTrap Copy Constructor Called\n";
    *this = obj;
}

ClapTrap &ClapTrap::operator=(ClapTrap const& obj) {
    this->_name = obj._name;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor Called\n";
}

int ClapTrap::getDamage()
{
    return _attackDamage;
}

void    ClapTrap::attack(const std::string& target)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing 1 points of damage!\n";
        _energyPoints--;
    }
    else
    {
        std::cout << "Can't attack\n";
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " take damage of " << amount << " points\n";
        _hitPoints -= amount;
    }
    else
    {
        std::cout << "Can't do anuthing\n";
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ClapTrap " << _name << " be repaired with " << amount << " points\n";
        _hitPoints += amount;
    }
    else
    {
        std::cout << "Can't repaire\n";
    }
}