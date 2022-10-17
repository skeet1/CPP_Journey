/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 09:06:19 by mkarim            #+#    #+#             */
/*   Updated: 2022/10/17 12:41:14 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include "Contact.hpp"
#include "PhoneBook.hpp"


int    add_cmd(PhoneBook &phBook)
{
    int fileds = 0;
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

    std::cout << "Enter your first name" << std::endl;
    if (std::getline(std::cin, firstName)) fileds++;
    if (std::cin.eof())
    {
        std::cout << "EOF ...!" << std::endl;
        return 1;
    }
    std::cout << "Enter your last name" << std::endl;
    if (std::getline(std::cin, lastName)) fileds++;
    if (std::cin.eof())
    {
        std::cout << "EOF ...!" << std::endl;
        return 1;
    }
    std::cout << "Enter your nickname" << std::endl;
    if (std::getline(std::cin, nickname)) fileds++;
    if (std::cin.eof())
    {
        std::cout << "EOF ...!" << std::endl;
        return 1;
    }
    std::cout << "Enter your phone number" << std::endl;
    if (std::getline(std::cin, phoneNumber)) fileds++;
    if (std::cin.eof())
    {
        std::cout << "EOF ...!" << std::endl;
        return 1;
    }
    std::cout << "Enter your darkest secret" << std::endl;
    if (std::getline(std::cin, darkestSecret)) fileds++;
    if (std::cin.eof())
    {
        std::cout << "EOF ...!" << std::endl;
        return 1;
    }
    static int i;
    if (fileds == 5)
    {
        Contact newContact;
        newContact.firstName    = firstName;
        newContact.lastName     = lastName;
        newContact.nickname     = nickname;
        newContact.phoneNumber  = phoneNumber;
        newContact.darketSecret = darkestSecret;
        phBook.contact[i++] = newContact;
        if (i == 8) i = 0;
        std::cout << "User has been added successfully\n\n";
    }
    return (0);
}

void    print_string(std::string s)
{
    int i = 0;
    int len = s.length();
    if (len > 10)
    {
        while (i < 9)
        {
            std::cout << s[i];
            i++;
        }
        std::cout << ".";
    }
    else
    {
        int spaces = 10 - s.length();
        while (spaces--)
            std::cout << " ";
        std::cout<< s;
    }
}

void    search_cmd(PhoneBook &phBook)
{
    int i;
    int user_id;

    i = 0;
    print_string("User ID");
    std::cout << "|";
    print_string("FirstName");
    std::cout << "|";
    print_string("LastName");
    std::cout << "|";
    print_string("NickName");
    std::cout << std::endl;
    while (i < 8 && phBook.contact[i].firstName.length() > 0)
    {
        std::cout << "         " << i+1 << "|";
        print_string(phBook.contact[i].firstName);
        std::cout << "|";
        print_string(phBook.contact[i].lastName);
        std::cout << "|";
        print_string(phBook.contact[i].nickname);
        std::cout << std::endl;
        i++;
    }
    std::cout << "Enter CONTACT ID : " << std::endl;
    std::cin >> user_id;
    std::cin.ignore();
    if (user_id < 1 || user_id > 8)
    {
        std::cout << "Sorry, you're out of range" << std::endl;
    }
    else if (phBook.contact[user_id-1].firstName.length() == 0)
    {
        std::cout << "There is no contact with this index" << std::endl;
    }
    else
    {
        std::cout << "User ID        : " << user_id << std::endl;
        std::cout << "Frist Name     : " << phBook.contact[user_id-1].firstName << std::endl;
        std::cout << "Last Name      : " << phBook.contact[user_id-1].lastName << std::endl;
        std::cout << "Nick Name      : " << phBook.contact[user_id-1].nickname << std::endl;
        std::cout << "Phone Number   : " << phBook.contact[user_id-1].nickname << std::endl;
        std::cout << "Darkest Secret : " << phBook.contact[user_id-1].nickname << std::endl;
    }
    std::cout << std::endl;
}

int main()
{
    PhoneBook phBook;
    std::string cmd;
    while (1)
    {
        std::cout << "Hello USER, Please Enter one of these three Commands" << std::endl;
        std::cout << "ADD, SEARCH, EXIT" << std::endl;
        std::getline(std::cin, cmd);
        if (std::cin.eof())
        {
            std::cout << "EOF ...!" << std::endl;
            return (0);
        }
        if (cmd.compare("ADD") == 0)
        {
            if (add_cmd(phBook))
                return (0);
        }
        else if (cmd.compare("SEARCH") == 0)
        {
            search_cmd(phBook);
        }
        else if (cmd.compare("EXIT") == 0)
        {
            return (0);
        }
        else
            std::cout << "Invalid command!" << std::endl;
    }
}
