/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:34:48 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/11 12:49:08 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = val << this->rawBits;
}

Fixed::Fixed(const float val)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(val * (1 << rawBits));
}

int Fixed::getValue() const
{
    return (value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment constructor called" << std::endl;
    this->value = obj.getValue();
    return *this;
}

float Fixed::toFloat(void) const {
    return (float(this->value) / (float)(1 << this->rawBits));
}

int Fixed::toInt(void) const {
    return (this->value / (1 << this->rawBits));
}

std::ostream &operator<<( std::ostream &os, const Fixed &obj )
{
    os << obj.toFloat();
    return os;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

