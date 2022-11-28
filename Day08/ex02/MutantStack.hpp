/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:19:39 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/28 13:52:00 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <list>
#include <stack>
#include <vector>
#include <deque>

template<class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
    public:
        typedef typename Container::iterator iterator;
        MutantStack(){};
        MutantStack(const MutantStack &obj)
        {
            this = obj;
        }
        MutantStack& operator=(const MutantStack &obj)
        {
            this = obj;
            return *this;
        }
        ~MutantStack(){};

        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }
};

#endif