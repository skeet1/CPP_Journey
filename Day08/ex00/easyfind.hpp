/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 09:17:34 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/27 09:38:28 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

template<typename T>
int easyfind(T &arr, int occ)
{
    typename T::iterator it;
    it = find(arr.begin(), arr.end(), occ);
    if (it != arr.end()) return 1;
    return 0;
}

#endif
