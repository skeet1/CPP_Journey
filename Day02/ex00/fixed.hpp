/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:30:41 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/09 18:12:44 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int value;
    static const int rawBits = 8;
public:
    Fixed();
    Fixed(Fixed &obj);
    int getRawBits();
    void setRawBits(int const raw);
    ~Fixed();
    Fixed &operator=(Fixed &obj);
};

#endif