/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 09:40:54 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/28 19:35:57 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <list>
#include <deque>

#define MAX_INT 2147483647

class Span {
    private:
        unsigned int _N;
        std::vector<int> _vec;
    public:
        Span();
        Span(const Span &obj);
        Span& operator=(const Span &obj);
        ~Span();

        Span(unsigned int N);
        void addNumber(int val);

        unsigned int shortestSpan();
        unsigned int longestSpan();
        template < typename it>
        void    addNumbers(it b, it e)
        {
            while (b != e)
            {
                if (this->_vec.size() < this->_N)
                    this->_vec.push_back(*b);
                else
                    throw std::invalid_argument("can't add number because vector already full");
                b++;
            }
        }
};

#endif