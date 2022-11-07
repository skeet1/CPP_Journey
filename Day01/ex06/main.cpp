/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 04:49:09 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/07 14:40:19 by mkarim           ###   ########.fr       */
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
    switch (ind)
    {
    case -1:
        std::cout << "Invalid level...!" << std::endl;
        break;
    case 0:
        (this->*func[0])();
    case 1:
        (this->*func[1])();
    case 2:
        (this->*func[2])();
    case 3:
        (this->*func[3])();
    }
}

int main(int argc, char **argv)
{
    Harl H;

    if (argc != 2)
    {
        std::cout << "Invalid number of arguments!" << std::endl;
        return (0);
    }
    H.complain(argv[1]);
    return (0);
}