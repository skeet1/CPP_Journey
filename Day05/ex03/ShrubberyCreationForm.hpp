/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 09:46:18 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/22 09:54:11 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(ShrubberyCreationForm & obj);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm &obj);
        ~ShrubberyCreationForm();

        std::string getTarget();

        ShrubberyCreationForm(std::string target);

        void    beSigned(Bureaucrat &obj);
};

#endif