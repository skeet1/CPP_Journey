/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:15:20 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/22 10:29:52 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <fstream>

class Bureaucrat;

class AForm
{
    private:
        std::string const   _name;
        bool                _isSigned;
        int const           _gradeToSign;
        int const           _gradeToExecute;
    public:
        AForm();
        AForm(std::string name, bool isSigned, int gradeToSign, int gradeToExecute);
        AForm(const AForm &obj);
        AForm &operator=(const AForm &obj);
        ~AForm();

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

        std::string getName() const;
        bool        getIsSigned() const;
        int         getGradeToSign() const;
        int         getGradeToExecute() const;

        void        setIsSigned(bool isSigned);
        void    execute(Bureaucrat const & executor) const;

        virtual void    beSigned(Bureaucrat &obj) = 0;
};

#endif
