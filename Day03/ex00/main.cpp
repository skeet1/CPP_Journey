/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 08:02:06 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/14 13:15:37 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Copyright @bigpel66

#include "ClapTrap.hpp"

int main(void) {
    std::string s1 = "Mohamed";
    std::string s2 = "Karim";

    ClapTrap  c1(s1);
    ClapTrap  c2(s2);

    c1.attack(s2);
    c2.takeDamage(c1.getDamage());
    c2.beRepaired(10);
    return 0;
}