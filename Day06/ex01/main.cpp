/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 18:06:35 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/24 18:48:33 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data *ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main()
{
    Data d;

    d.x = 5;
    std::cout << d.x << std::endl;
    std::cout << &d << std::endl;
    uintptr_t ud = serialize(&d);
    std::cout << ud << std::endl;
    std::cout << &ud << std::endl;
    Data *dd = deserialize(ud);
    std::cout << dd->x << std::endl;
    std::cout << dd << std::endl;
}