/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 08:57:17 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/25 15:14:23 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
}

Base* generate(void)
{
    srand(time(NULL));
    int val = rand() % 3;
    Base *p = NULL;
    if (val == 0)
    {
        std::cout << "generate a ptr type A\n";
        p = new A();
    }
    else if (val == 1)
    {
        std::cout << "generate a ptr type B\n";
        p = new B();
    }
    else if (val == 2)
    {
        std::cout << "generate a ptr type C\n";
        p = new C();
    }
    return p;
}

void  identify(Base* p)
{
    if (dynamic_cast<A*>(p))
    {
        std::cout << "We found a Class A type\n";
    }
    else if (dynamic_cast<B*>(p))
    {
        std::cout << "We found a Class B type\n";
    }
    else if (dynamic_cast<C*>(p))
    {
        std::cout << "We found a Class C type\n";
    }
    else
        std::cout << "No type, it's NULL!";
}

void  identify(Base &p)
{
    try {
        A a = dynamic_cast<A&>(p);
        std::cout << "Detect Class A\n";
        return ;
    }
    catch(std::bad_cast &e)
    {
    }
    try {
        B a = dynamic_cast<B&>(p);
        std::cout << "Detect Class B\n";
        return ;
    }
    catch(std::bad_cast &e)
    {
    }
    try {
        C a = dynamic_cast<C&>(p);
        std::cout << "Detect Class C\n";
        return ;
    }
    catch(std::bad_cast &e)
    {
    }
    std::cout << "Bad Cast\n";
}