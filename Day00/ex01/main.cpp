/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 09:06:19 by mkarim            #+#    #+#             */
/*   Updated: 2022/08/12 12:51:43 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    std::string cmd;
    while (1)
    {
        std::cout << "Hello USER, Please Enter one of these three Commands" << std::endl;
        std::cout << "ADD, SEARCH, EXIT" << std::endl;
        std::cin >> cmd;
        if (cmd.compare("ADD") == 0)
        {
            std::cout << "Execute ADD Command!" << std::endl;
        }
        else if (cmd.compare("SEARCH") == 0)
        {
            std::cout << "Execute SEARCH Command!" << std::endl;
        }
        else if (cmd.compare("EXIT") == 0)
        {
            std::cout << "Execute EXIT Command!" << std::endl;
            return (0);
        }
        else
            std::cout << "Invalid command!" << std::endl;
    }
}