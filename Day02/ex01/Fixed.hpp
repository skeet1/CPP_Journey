/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:30:41 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/11 12:44:20 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int value;
    static const int rawBits = 8;
public:
    Fixed();
    Fixed(const int val);
    Fixed(const float val);
    Fixed(const Fixed &obj);
    int getValue() const;
    void setRawBits(int const raw);
    Fixed &operator=(const Fixed &obj);
    float toFloat( void ) const;
    int toInt(void) const;
    ~Fixed();
};

std::ostream &operator<<( std::ostream &os, const Fixed &obj );

#endif