/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 19:41:27 by zsonie            #+#    #+#             */
/*   Updated: 2026/05/04 19:51:26 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include <vector>
#include <list>
#include <set>
#include <map>
#include <stack>
#include <queue>

#include "easyfind.hpp"

int main() {
    
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    std::vector<int>::iterator it = easyfind(v, 3);
    if (it != v.end())
        std::cout << "Found: " << *it << std::endl;
    else
        std::cout << "Not found\n";
}
