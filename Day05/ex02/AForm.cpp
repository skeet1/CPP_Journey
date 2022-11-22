/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:24:54 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/22 10:29:35 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): _name("noName"), _isSigned(false), _gradeToSign(0), _gradeToExecute(0)
{
    std::cout << "AForm Default Constructor Called\n";
}

AForm::AForm(std::string name, bool isSigned, int gradeToSign, int gradeToExecute): _name(name), _isSigned(isSigned), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    std::cout << "AForm Constructor Called\n";
}

AForm::AForm(const AForm &obj): _gradeToSign(obj._gradeToSign), _gradeToExecute(obj._gradeToExecute)
{
    std::cout << "AForm Copy Constructor Called\n";
    this->_isSigned = obj._isSigned;
}

AForm &AForm::operator=(const AForm &obj)
{
    std::cout << "AForm Copy Assignment Called\n";
    this->_isSigned = obj._isSigned;
    return *this;
}

AForm::~AForm()
{
    std::cout << "AForm Destructor Called\n";
}

std::string AForm::getName() const
{
    return _name;
}

bool    AForm::getIsSigned() const
{
    return _isSigned;
}

int     AForm::getGradeToSign() const
{
    return _gradeToSign;
}

int     AForm::getGradeToExecute() const
{
    return _gradeToExecute;
}

void    AForm::setIsSigned(bool isSinged)
{
    _isSigned = isSinged;
}

void    AForm::execute(Bureaucrat const & executor) const {
    if (_isSigned && executor.getGrade() <= _gradeToExecute)
    {
        std::cout << executor.getName() << " Execute the form : " << _name << "\n";
    }
    else
        throw GradeTooLowException();
}

void    AForm::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() <= _gradeToSign)
    {
        _isSigned = true;
    }
    else
        throw AForm::GradeTooLowException();
}
