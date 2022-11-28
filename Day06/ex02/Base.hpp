/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 09:05:56 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/25 14:18:19 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base {
    public:
        virtual ~Base();
};

class A : public Base {
};

class B : public Base {
};

class C : public Base {
};

Base* generate(void);
void  identify(Base* p);
void  identify(Base &p);

#endif