/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:37:16 by mkarim            #+#    #+#             */
/*   Updated: 2022/10/31 09:27:28 by mkarim           ###   ########.fr       */
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
        Zombie* newZombie( std::string name );
        void randomChump(std::string name);
        ~Zombie();
};

#endif