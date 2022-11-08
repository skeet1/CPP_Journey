/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 09:42:35 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/08 09:52:40 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *z;

    int N = 3;
    z = zombieHorde(N, "chi haja");
    for (int i = 0; i < N; i++)
        z[i].announce();
    delete [] z;
    return (0);
}