/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:49:20 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/22 10:31:48 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try {
        Bureaucrat b1("Mohamed", 1);
        Bureaucrat b2("Karim", 50);
        Bureaucrat b3("Someone", 100);
        Bureaucrat b4;
        ShrubberyCreationForm sh1("shru_file");
        RobotomyRequestForm rob1("rob_target");
        PresidentialPardonForm prsd1("president_target");
        b1.signForm(sh1);
        b2.signForm(sh1);
        b3.signForm(sh1);
        b4.signForm(sh1);
        sh1.execute(b2);
        b2.executeForm(sh1);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}