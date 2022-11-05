/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:25:11 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/05 10:50:02 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
    public:
        std::string name;
        Weapon *WeapPtr;
        HumanB(std::string name);
        void setWeapon(Weapon &myWeap);
        void attack();
};

#endif