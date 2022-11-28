/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 09:51:33 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/28 18:56:50 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(const Span &obj)
{
    *this = obj;
}

Span& Span::operator=(const Span &obj)
{
    this->_N = obj._N;
    this->_vec.clear();
    std::vector<int>::const_iterator it;
    it = obj._vec.begin();
    while (it != obj._vec.end())
    {
        this->_vec.push_back(*it);
        it++;
    }
    return *this;
}

Span::~Span()
{}

void Span::addNumber(int val)
{
    if (this->_N > this->_vec.size())
    {
        this->_vec.push_back(val);
    }
    else
        throw std::invalid_argument("can't add number");
}

Span::Span(unsigned int N)
{
    _N = N;
}

unsigned int Span::shortestSpan()
{
    std::vector<int>::const_iterator it;
    std::vector<int>::const_iterator it_end;

    it = this->_vec.begin();
    it_end = this->_vec.end();
    sort(this->_vec.begin(), this->_vec.end());
    if (this->_N <= 1)
        throw std::invalid_argument("not enough elements");
    int res = MAX_INT;
    while (it != it_end - 1)
    {
        if ((*(it+1) - *it) < res)
            res = *(it+1) - *it;
        it++;
    }
    return res;
}

unsigned int Span::longestSpan()
{
    sort(this->_vec.begin(), this->_vec.end());
    std::vector<int>::const_iterator it_b;
    std::vector<int>::const_iterator it_e;
    it_b = this->_vec.begin();
    it_e = this->_vec.end();
    it_e--;
    return (*it_e - *it_b);
}
