/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 09:24:17 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/27 09:39:33 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{

    // vector
    std::vector<int> vec;
    
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(9);
    vec.push_back(7);

    std::cout << (easyfind(vec, 7) ? "We found it " : "We didn't found it") << std::endl;


    // list
    std::list<int> lst;

    lst.push_back(12);
    lst.push_back(31);
    lst.push_back(11);
    lst.push_back(27);

    std::cout << (easyfind(lst, 11) ? "We found it " : "We didn't found it") << std::endl;
    return 0;
}