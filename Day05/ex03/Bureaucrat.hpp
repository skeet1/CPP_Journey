/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:08:10 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/22 10:30:07 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class Bureaucrat {
    private:
        std::string const   _name;
        int                 _grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat & obj);
        Bureaucrat &operator=(const Bureaucrat & obj);
        ~Bureaucrat();

        Bureaucrat(std::string name, int grade);

        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();

        class GradeTooHighException : public std::exception {
            public:
                virtual const char* what() const throw()
                {
                    return ("Grade too high bro");
                }
        };
        class GradeTooLowException : public std::exception {
            public:
                virtual const char* what() const throw()
                {
                    return ("Grade too low bro");
                }
        };

        void    signForm(AForm &obj);
        void    executeForm(AForm const & obj);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat & obj);

#endif