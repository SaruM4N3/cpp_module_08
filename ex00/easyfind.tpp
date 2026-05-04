/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsonie <zsonie@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 18:25:51 by zsonie            #+#    #+#             */
/*   Updated: 2026/05/04 20:15:41 by zsonie           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include <iostream>
#include <iterator>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& data_struct, int val)
{
	typename T::iterator it = std::find(data_struct.begin(),data_struct.end(), val);

	if (it == data_struct.end())
		throw std::runtime_error("Value not foubd");

	return it;
}

#endif