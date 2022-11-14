/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 08:02:06 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/14 14:40:30 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
    std::string s1 = "Mohamed";
    std::string s2 = "Karim";

    ScavTrap  c1(s1);
    ScavTrap  c2(s2);

    c1.attack(s2);
    c2.takeDamage(1);
    c2.beRepaired(10);
    return 0;
}