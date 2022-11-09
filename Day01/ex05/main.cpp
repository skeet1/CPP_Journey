/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 04:49:09 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/08 12:44:33 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void    Harl::complain(std::string level)
{
    std::string lvls[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    typedef void (Harl::*functions)(void);
    functions func[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int ind = -1;
    for (int i = 0; i < 4; i++)
    {
        if (level.compare(lvls[i]) == 0)
        {
            ind = i;
            break;
        }
    }
    if (ind == -1)
        std::cout << "Invalid Level!" << std::endl;
    else
        (this->*func[ind])();
}

int main()
{
    Harl H;

    H.complain("INFO");
    return (0);
}