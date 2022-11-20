/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:49:20 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/20 19:59:31 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Bureaucrat b1("Mohamed", 1);
        Bureaucrat b2("Karim", 5);
        Bureaucrat b3("Cristiano", 100);
        Form    f1("Form1", false, 10, 50);
        f1.beSigned(b1);
        b1.signForm(f1);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}