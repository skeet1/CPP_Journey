/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 09:06:19 by mkarim            #+#    #+#             */
/*   Updated: 2022/08/12 18:20:47 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Contact.hpp"
#include "PhoneBook.hpp"

void    add_cmd()
{
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

    std::cout << "Enter your first name" << std::endl;
    std::cin >> firstName;
    std::cout << "Enter your last name" << std::endl;
    std::cin >> lastName;
    std::cout << "Enter your nickname" << std::endl;
    std::cin >> nickname;
    std::cout << "Enter your phone number" << std::endl;
    std::cin >> phoneNumber;
    std::cout << "Enter your darkest secret" << std::endl;
    std::cin >> darkestSecret;
    Contact newContact;
    newContact.firstName    = firstName;
    newContact.lastName     = lastName;
    newContact.nickname     = nickname;
    newContact.phoneNumber  = phoneNumber;
    newContact.darketSecret = darkestSecret;
    PhoneBook phBook;
    phBook.contact[0] = newContact;
    std::cout << "User has been added successfully\n\n";
}

// void    search_cmd()
// {
// }

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
            add_cmd();
        }
        else if (cmd.compare("SEARCH") == 0)
        {
            std::cout << "Execute SEARCH Command!" << std::endl;
            // search_cmd();
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
