/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:41:26 by rraumain          #+#    #+#             */
/*   Updated: 2025/10/07 18:06:32 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <cstddef>

template<typename T, typename F>
void iter(T *arr, const std::size_t len, F fn)
{
	for (std::size_t i = 0; i < len; i++)
		fn(arr[i]);
}

template<typename T, typename F>
void iter(const T *arr, const std::size_t len, F fn)
{
	for (std::size_t i = 0; i < len; i++)
		fn(arr[i]);
}