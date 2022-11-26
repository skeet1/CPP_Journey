/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:39:12 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/26 10:23:15 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void print(T n)
{
    std::cout << n << std::endl;
}

template <typename T>
void iter(T *arr, size_t len, void (f)(T))
{
    for (size_t i = 0; i < len; i++)
    {
        f(arr[i]);
    }
}

#endif