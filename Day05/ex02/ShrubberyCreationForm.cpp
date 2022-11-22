/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:34:07 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/22 09:53:55 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery", false, 145, 137)
{
    std::cout << "Shrubbery Default Constructor Called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &obj): AForm("Shrubbery", false, 145, 137)
{
    std::cout << "Shrubbery Copy Constructor Called\n";
    (void)obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &obj)
{
    std::cout << "Shrubbery Copy Assignment Called\n";
    (void)obj;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Shrubbery Destructor Called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery", false, 145, 137)
{
    std::cout << "Shrubbery Constructor Called\n";
    std::ofstream file(target + "shrubbery");
    file << "        #\n";
    file << "      #o###\n";
    file << "    #####o###\n";
    file << "   #o#|#|#/###\n";
    file << "   #o#|#|#/###\n";
    file << "    ####|/#o#\n";
    file << "      #}|{#\n";
    file << "       }|{\n";
    file << "        |\n";
    file.close();
}

void    ShrubberyCreationForm::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() <= this->getGradeToSign())
    {
        this->setIsSigned(true);
    }
    else
        throw AForm::GradeTooLowException();
}