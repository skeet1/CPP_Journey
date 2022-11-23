/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 10:08:05 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/22 09:54:14 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        std::string _target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm & obj);
        RobotomyRequestForm &operator=(RobotomyRequestForm &obj);
        ~RobotomyRequestForm();

        std::string getTarget();

        RobotomyRequestForm(std::string target);
        
        void    beSigned(Bureaucrat &obj);
};

#endif