/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 19:01:11 by zsonie            #+#    #+#             */
/*   Updated: 2026/05/11 22:46:25 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"

class span
{
public:
    span(unsigned int N);
    span(const span &copy);
    span &operator=(const span &copy);
    ~span();

    void addNumber(int number);
    unsigned int shortestSpan();
    unsigned int longestSpan();

private:
    unsigned int _N;
    std::vector<int> _array;
};

#endif