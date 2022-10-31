/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:37:16 by mkarim            #+#    #+#             */
/*   Updated: 2022/10/31 10:09:55 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
    private:
        std::string name;
    public:
        Zombie(std::string Name);
        void announce( void );
        Zombie* zombieHorde( int N, std::string name );
        ~Zombie();
};

#endif