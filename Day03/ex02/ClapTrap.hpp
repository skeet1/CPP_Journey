/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 08:02:09 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/14 14:41:43 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const& obj);
        ClapTrap &operator=(ClapTrap const& obj);
        virtual ~ClapTrap();

        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        virtual void attack(const std::string& target);

        int getDamage();
};

#endif
