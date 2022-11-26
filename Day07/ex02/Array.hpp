/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 10:27:29 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/26 18:43:19 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {
    private:
        T *arr;
        unsigned int len;
    public:
        Array();
        Array(const Array &obj);
        Array& operator=(const Array &obj);
        ~Array(){};

        Array(unsigned int n);
        T& operator[](unsigned int n); 
        T const & operator[](unsigned int n) const ; 

        unsigned int size();

        class OutOfBounds : public std::exception {
            public:
                virtual const char *what() const throw()
                {
                    return "out of bounds a3chiri";
                }
        };
};

template<typename T> Array<T>::Array()
{
    len = 0;
    arr = NULL;
}

template<typename T> Array<T>::Array(const Array &obj)
{
    this->arr = NULL;
    *this = obj;
}
template<typename T> Array<T>& Array<T>::operator=(const Array &obj)
{
    if (this->arr)
    {
        delete arr;
        arr = NULL;
    }
    this->len = obj.len;
    this->arr = new T[this->len];
    for (size_t i = 0; i < this->len; i++)
    {
        this->arr[i] = obj.arr[i];
    }
    return *this;
}

template<typename T> Array<T>::Array(unsigned int n)
{
    len = n;
    arr = new T[n];
}

template<typename T> T& Array<T>::operator[](unsigned int n)
{
    if (n >= len)
    {
        throw OutOfBounds();
    }
    return arr[n];
}

template<typename T> T const & Array<T>::operator[](unsigned int n) const
{
    if (n >= len)
    {
        throw OutOfBounds();
    }
    return arr[n];
}

template<typename T> unsigned int Array<T>::size()
{
    return this->len;
}
#endif