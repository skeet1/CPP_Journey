/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:34:48 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/11 17:51:18 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0){
}

Fixed::Fixed(const Fixed &obj)
{
    *this = obj;
}

Fixed::Fixed(const int val)
{
    this->value = val << this->rawBits;
}

Fixed::Fixed(const float val)
{
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
    this->value = obj.getValue();
    return *this;
}

float Fixed::toFloat(void) const {
    return (float(this->value) / (float)(1 << this->rawBits));
}

int Fixed::toInt(void) const {
    return (this->value / (1 << this->rawBits));
}

bool Fixed::operator<( const Fixed &obj)
{
    if (this->getValue() < obj.getValue())
        return true;
    return false;
}

bool Fixed::operator>( const Fixed &obj)
{
    if (this->getValue() > obj.getValue())
        return true;
    return false;
}

bool Fixed::operator<=( const Fixed &obj)
{
    if (this->getValue() <= obj.getValue())
        return true;
    return false;
}

bool Fixed::operator>=( const Fixed &obj)
{
    if (this->toFloat() >= obj.toFloat())
        return true;
    return false;
}

bool Fixed::operator==( const Fixed &obj)
{
    if (this->toFloat() == obj.toFloat())
        return true;
    return false;
}

bool Fixed::operator!=( const Fixed &obj)
{
    if (this->toFloat() != obj.toFloat())
        return true;
    return false;
}

Fixed Fixed::operator+( const Fixed &obj)
{
    return (this->toFloat() + obj.toFloat());
}

Fixed Fixed::operator-( const Fixed &obj)
{
    return (this->toFloat() - obj.toFloat());
}

Fixed Fixed::operator*( const Fixed &obj)
{
    return (this->toFloat() * obj.toFloat());
}

Fixed Fixed::operator/( const Fixed &obj)
{
    return (this->toFloat() / obj.toFloat());
}

Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getValue() <= b.getValue())
        return  (Fixed &)a;
    return  (Fixed &)b;
}

Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getValue() >= b.getValue())
        return  (Fixed &)a;
    return (Fixed &)b;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getValue() <= b.getValue())
        return a;
    return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getValue() >= b.getValue())
        return a;
    return b;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp;

    tmp.value = value;
    value++;
    return tmp;
}

Fixed Fixed::operator++()
{
    Fixed tmp;

    tmp.value = ++value;
    return tmp;
}

std::ostream &operator<<( std::ostream &os, const Fixed &obj )
{
    os << obj.toFloat();
    return os;
}

Fixed::~Fixed() {}
