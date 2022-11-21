/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:49:20 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/21 18:30:40 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Bureaucrat b1("Mohamed", 1);
        Bureaucrat b2;
        Form f1("Form1", false, 10, 50);
        std::cout << f1 << std::endl;
        Form f2;
        std::cout << f2 << std::endl;
        f1.beSigned(b1);
        std::cout << f1 << std::endl;
        f2.beSigned(b1);
        std::cout << f2 << std::endl;
        b1.signForm(f1);
        b2.signForm(f1);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}