/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:47:43 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/14 15:39:49 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap& operator=(const FragTrap& obj);
        ~FragTrap();

        void highFivesGuys(void);
};

#endif
