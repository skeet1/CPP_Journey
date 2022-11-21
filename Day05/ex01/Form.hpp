/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:15:20 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/21 18:22:10 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Bureaucrat;

class Form
{
    private:
        std::string const   _name;
        bool                _isSigned;
        int const           _gradeToSign;
        int const           _gradeToExecute;
    public:
        Form();
        Form(std::string name, bool isSigned, int gradeToSign, int gradeToExecute);
        Form(const Form &obj);
        Form &operator=(const Form &obj);
        ~Form();

        class GradeTooHighException : public std::exception {
            public:
                virtual const char *what() const throw()
                {
                    return ("Grade Too High Exception");
                }
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char *what() const throw()
                {
                    return ("Grade Too Low Exception"); 
                }
        };

        std::string getName();
        bool        getIsSigned();
        int         getGradeToSign();
        int         getGradeToExecute();

        void    beSigned(Bureaucrat &obj);
};

std::ostream &operator<<(std::ostream &out, Form &obj);

#endif
