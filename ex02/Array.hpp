/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 09:55:55 by rraumain          #+#    #+#             */
/*   Updated: 2025/10/08 10:50:14 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
class Array
{
	public:
		Array();
		Array(const Array &other);
		Array &operator=(const Array &other);
		~Array();

		Array(unsigned int n);
		T &operator[](unsigned int index);
		const T &operator[](unsigned int index) const;
		unsigned int size() const;
	
	private:
		T* _data;
		unsigned int _size;
};

#include "Array.tpp"
