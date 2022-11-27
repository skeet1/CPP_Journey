/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 11:10:42 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/27 21:38:58 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try {
        Span sp = Span(10);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        std::vector<int> v;

        v.push_back(100);
        v.push_back(111);
        v.push_back(123);

        sp.addNumbers(v.begin(), v.end());
    }
    catch(const std::invalid_argument &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}