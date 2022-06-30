/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/22 11:05:49 by mxu               #+#    #+#             */
/*   Updated: 2021/10/26 15:46:16 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_HPP_
#define _ARRAY_HPP_

#include <string>
#include <iostream>
#include <new>
#include <exception>

template <typename T, size_t N>
class Array
{
    T * arrayPtr;
public:
    Array();
    Array(const Array<T, N> &);
    Array & operator = (const Array<T, N> &);
    ~Array();
    int size();
    T & operator[] (int) const;
};

template <typename T, size_t N>
Array<T, N>::Array()
{
    if (N == 0)
        arrayPtr = nullptr;
    else
    {
        try
        {
            arrayPtr = new T[N];
        }
        catch(std::bad_alloc & ba)
        {
            std::cout << "Memory allocation for array failed: " << std::endl << ba.what() << std::endl; 
        }
    }
}

template <typename T, size_t N>
Array<T, N>::Array(const Array<T, N> & rhs)
{
    try
    {
        arrayPtr = new T[N];
        for (int i = 0; i < (int)N; i++)
            arrayPtr[i] = rhs.arrayPtr[i];
    }
    catch(std::bad_alloc & ba)
    {
        std::cout << "Memory allocation for array failed: " << std::endl << ba.what() << std::endl;  
    }     
}

template <typename T, size_t N>
Array<T, N> & Array<T, N>::operator = (const Array<T, N> & rhs)
{
    if (this != &rhs)
    {
        try
        {
            if(arrayPtr)
                delete[] arrayPtr;
            arrayPtr = new T[N];
            for (int i = 0; i < (int)N; i++)
                arrayPtr[i] = rhs.arrayPtr[i];
        }
        catch(std::bad_alloc & ba)
        {
            std::cout << "Memory allocation for array failed: "<< std::endl << ba.what() << std::endl; 
        }
    }
    return *this;
}

template <typename T, size_t N>
Array<T, N>::~Array()
{
    if(arrayPtr)
        delete[] arrayPtr;
    arrayPtr = nullptr;
}

template <typename T, size_t N>
int Array<T, N>::size() {return N;}

template <typename T, size_t N>
T & Array<T, N>::operator[] (int i) const
{
    try
    {
        if (i < 0 || i >= (int)N)
            throw std::exception();
    } catch (std::exception & e)
    {
        std::cout << "Index " << i << " is outside the range of the array: " \
            << e.what() << std::endl;
    }
    return arrayPtr[i];
}

template <typename T, size_t N>
std::ostream & operator<< (std::ostream & o, const Array<T, N> & in)
{
    for (int i = 0; i < (int)N; i++)
        o << in[i] << ' ';
    return o << std::endl;
}

#endif
