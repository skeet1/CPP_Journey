/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 09:40:54 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/27 21:38:39 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

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

        void    addNumbers(std::vector<int>::const_iterator first, std::vector<int>::const_iterator second);
};

#endif