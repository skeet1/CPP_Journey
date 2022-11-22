/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:58:49 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/22 15:43:42 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(): AForm("Roboto", false, 72, 45)
{
    std::cout << "Roboto Default Constructor Called\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &obj): AForm("Roboto", false, 72, 45)
{
    std::cout << "Roboto Copy Constructor Called\n";
    *this = obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm &obj)
{
    std::cout << "Roboto Copy Assingment Called\n";
    _target = obj.getTarget();
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Roboto Destructor Called\n";
}

std::string RobotomyRequestForm::getTarget()
{
    return _target;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Roboto", false, 72, 45)
{
    std::cout << "Roboto Constructor Called\n";
    _target = target;
    srand(time(NULL));
    int val = rand() % 2;
    if (val & 1)
    {
        std::cout << "the " << target << " has been robotomized successfully\n";
    }
    else
    {
        std::cout << "the " << target << " failed\n";
    }
}

void    RobotomyRequestForm::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() <= this->getGradeToSign())
    {
        this->setIsSigned(true);
    }
    else
        throw AForm::GradeTooLowException();
}