/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:14:24 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/22 09:53:00 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Presidential", false, 25, 5)
{
    std::cout << "Presidential Default Constructor Called\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &obj): AForm("Presidential", false, 25, 5)
{
    std::cout << "Presidential Copy Constructor Called\n";
    (void)obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &obj)
{
    std::cout << "Presidential Copy Assignment Constructor Called\n";
    (void)obj;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Presidential Destructor Called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Presidential", false, 25, 5)
{
    std::cout << "Presidential Constructor Called\n";
    std::cout << "The " << target << " has been pardoned by Zaphod Beeblebrox.\n";
}

void    PresidentialPardonForm::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() <= this->getGradeToSign())
    {
        this->setIsSigned(true);
    }
    else
        throw AForm::GradeTooLowException();
}