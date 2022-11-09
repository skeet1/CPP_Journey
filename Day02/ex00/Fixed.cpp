/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:34:48 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/09 18:15:36 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixed.hpp"

Fixed::Fixed() : value(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    // this->value = obj.getRawBits();
    *this = obj;
}

int Fixed::getRawBits()
{
    std::cout << "getRawBits member function called" << std::endl;
    return (value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

Fixed &Fixed::operator=(Fixed &obj)
{
    std::cout << "Copy assignment constructor called" << std::endl;
    this->value = obj.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

