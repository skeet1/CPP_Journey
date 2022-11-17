/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:13:19 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/16 17:35:19 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default Constructor Called\n";
}

Brain::Brain(const Brain &obj)
{
    std::cout << "Brain Copy Constructor Called\n";
    *this = obj;
}

Brain &Brain::operator=(const Brain &obj)
{
    std::cout << "Brain Copy assignment Constructor Called\n";
    for (int i=0;i<100;i++)
    {
        this->ideas[i] = obj.ideas[i];
    }
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destrucotr Called\n";
}