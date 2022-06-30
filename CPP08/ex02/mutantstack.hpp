/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:14:45 by mxu               #+#    #+#             */
/*   Updated: 2021/06/25 17:34:42 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP_
#define MUTANTSTACK_HPP_

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
    typedef typename std::deque<T>::iterator iterator;
public:
    MutantStack();
    iterator    begin();
    iterator    end();
};

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template <typename T>
typename MutantStack<T>::iterator    MutantStack<T>::begin() 
{ 
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator    MutantStack<T>::end() 
{ 
    return this->c.end();
}

#endif
