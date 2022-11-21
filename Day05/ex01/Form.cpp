/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:24:54 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/21 18:27:00 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): _name("noName"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
    std::cout << "Form Default Constructor Called\n";
}

Form::Form(std::string name, bool isSigned, int gradeToSign, int gradeToExecute): _name(name), _isSigned(isSigned), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    std::cout << "Form Constructor Called\n";
}

Form::Form(const Form &obj): _gradeToSign(obj._gradeToSign), _gradeToExecute(obj._gradeToExecute)
{
    std::cout << "Form Copy Constructor Called\n";
    this->_isSigned = obj._isSigned;
}

Form &Form::operator=(const Form &obj)
{
    std::cout << "Form Copy Assignment Called\n";
    this->_isSigned = obj._isSigned;
    return *this;
}

Form::~Form()
{
    std::cout << "Form Destructor Called\n";
}

std::ostream &operator<<(std::ostream &out, Form &obj)
{
    out << "Form name is : " << obj.getName() << ", and it is " << (obj.getIsSigned() ? "" : "NOT ") << "signed, the grade to sign is : " << obj.getGradeToSign() << ", and the grade to execute is : " << obj.getGradeToExecute();
    return out;
}

std::string Form::getName()
{
    return _name;
}

bool    Form::getIsSigned()
{
    return _isSigned;
}

int     Form::getGradeToSign()
{
    return _gradeToSign;
}

int     Form::getGradeToExecute()
{
    return _gradeToExecute;
}

void    Form::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() <= _gradeToSign)
    {
        _isSigned = true;
    }
    else
        throw Form::GradeTooLowException();
}
