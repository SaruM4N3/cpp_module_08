/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 19:41:27 by zsonie            #+#    #+#             */
/*   Updated: 2026/05/11 23:08:52 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <vector>
#include <algorithm>
#include <ctime>
#include <cstdlib>

#include "span.hpp"

int main() {
    srand(std::time(NULL));

    span cur = span(10000);
    
    for (unsigned int i = 0; i < 10000; i++)
    {
        int random_Num = rand();
        cur.addNumber(random_Num);    
    }
    std::cout << GREEN "random vector of size 10000:" RESET << std::endl;     
    std::cout << CYAN "shortest span: " MAGENTA << cur.shortestSpan() << RESET << std::endl;     
    std::cout << CYAN "longest span: " MAGENTA << cur.longestSpan() << RESET << std::endl << std::endl;

    span limit = span(10000);
    
    limit.addNumber(-2147483648);
    for (unsigned int i = 1; i < 9998; i++)
    {
        int random_Num = rand();
        limit.addNumber(random_Num);    
    }
    limit.addNumber(2147483647);
    std::cout << GREEN "limit vector of size 10000:" RESET << std::endl;     
    std::cout << CYAN "shortest span: " MAGENTA << limit.shortestSpan() << RESET << std::endl;     
    std::cout << CYAN "longest span: " MAGENTA << limit.longestSpan() << RESET << std::endl << std::endl;
    
    span test = span(10);
    test.addNumber(12);
    test.addNumber(0);
    test.addNumber(25);
    test.addNumber(99);
    test.addNumber(999);
    test.addNumber(919);
    test.addNumber(929);
    test.addNumber(939);
    test.addNumber(949);
    test.addNumber(959);
    std::cout << GREEN "test vector of size 10:" BLUE "\nShortest should display: " MAGENTA "12" BLUE "\nLongest should display: " MAGENTA "999" << RESET << std::endl;   
    std::cout << CYAN "shortest span: " MAGENTA << test.shortestSpan() << RESET << std::endl;
    std::cout << CYAN "longest span: " MAGENTA << test.longestSpan() << RESET << std::endl << std::endl;     
}
