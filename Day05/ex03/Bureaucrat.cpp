/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:11:22 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/22 10:30:35 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("BurNoName"), _grade(150)
{
    std::cout << "Bureaucrat Default Constructor Called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat & obj)
{
    std::cout << "Bureaucrat Copy Constructor Called\n";
    *this = obj;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat & obj)
{
    std::cout << "Bureaucrat Copy assignment operator Called\n";
    this->_grade = obj._grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor Called\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name), _grade(grade)
{
    std::cout << "Bureaucrat Constructor Called\n";
}

std::string Bureaucrat::getName() const 
{
    return _name;
}

int Bureaucrat::getGrade() const 
{
    return _grade;
}

void Bureaucrat::incrementGrade()
{
    if (_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade()
{
    if (_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat & obj)
{
    out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return out;
}

void    Bureaucrat::signForm(AForm &obj)
{
    try {
        obj.beSigned(*this);
        std::cout << _name << " signed " << obj.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << _name << " couldn't sign " << obj.getName() << " because " << e.what() << std::endl;
    }
}

void    Bureaucrat::executeForm(AForm const &obj)
{
    try {
        obj.execute(*this);
        std::cout << _name << " executed " << obj.getName() << "\n";
    }
    catch (std::exception &e)
    {
        std::cout << _name << " can't executed " << obj.getName() << "\n";
    }
}