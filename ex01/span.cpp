/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:14:40 by zsonie            #+#    #+#             */
/*   Updated: 2026/05/11 23:04:25 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <limits>
#include <iterator>
#include "span.hpp"

span::span(unsigned int N) : _N(N)
{
}

span::span(const span &copy)
{
    *this = copy;
}

span &span::operator=(const span &copy)
{
    if (this != &copy)
    {
        this->_N = copy._N;
        this->_array = copy._array;
    }
    return *this;
}

span::~span()
{
}

void span::addNumber(int number)
{
    if (this->_array.size() >= _N)
    {
        throw std::runtime_error("The Array is already full!");
    }
    this->_array.push_back(number);
}

unsigned int span::shortestSpan()
{
    if (_array.size() < 2)
        throw std::runtime_error("Not enough entry in Array!");
    unsigned int shortest = std::numeric_limits<unsigned int>::max();
    
    std::vector<int> tmp = _array;
    std::sort(tmp.begin(),tmp.end());
    
    for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end(); it++)
    {
        std::vector<int>::iterator next = it;
        ++next;
        unsigned int diff;
        if (*next < 0)
            diff = *it - *next;
        else
            diff = *next - *it;
        if (diff < shortest)
            shortest = diff;
    }
    return shortest;
}

unsigned int span::longestSpan()
{
    if (_array.size() < 2)
        throw std::runtime_error("Not enough entry in Array!");
    
    std::vector<int> tmp = _array;
    std::sort(tmp.begin(),tmp.end());

    
    unsigned int longest = *(tmp.end()-1) - *tmp.begin();
    
    return longest;
}
