/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:02:24 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/23 18:06:16 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern Default Constructor Called\n";
}

Intern::Intern(const Intern & obj)
{
    std::cout << "Intern Copy Constructor Called\n";
    *this = obj;
}

Intern &Intern::operator=(const Intern & obj)
{
    std::cout << "Intern Copy assignment operator Called\n";
    (void)obj;
    return *this;
}

Intern::~Intern()
{
    std::cout << "Intern Destructor Called\n";
}

AForm* Intern::makeForm(std::string formName, std::string target)
{
    int ind = -1;
    std::string tab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for (int i = 0; i < 3; i++)
    {
        if (formName.compare(tab[i]) == 0)
        {
            ind = i+1;
            break;
        }
    }
    switch (ind)
    {
        case 1:
            return (new ShrubberyCreationForm(target));
        case 2:
            return (new PresidentialPardonForm(target));
        case 3:
            return (new ShrubberyCreationForm(target));
        default:
            std::cout << "invalid formName\n";
            return NULL;
    }
}