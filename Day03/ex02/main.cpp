/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 08:02:06 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/14 15:42:56 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    std::string s1 = "Mohamed";
    std::string s2 = "Karim";

    FragTrap f1(s1);
    f1.attack("Hmida");
    return 0;
}