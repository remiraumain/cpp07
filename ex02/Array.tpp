/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 10:05:43 by rraumain          #+#    #+#             */
/*   Updated: 2025/10/08 11:14:07 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template<typename T>
Array<T>::Array() : _data(0), _size(0)
{
	std::cout << "Array constructed\n";
}

template<typename T>
Array<T>::Array(const Array &other) : _data(0), _size(other._size)
{
	_data = new T[_size];
	for (unsigned int i = 0; i < _size; i++)
	{
		_data[i] = other._data[i];
	}
	std::cout << "Array copy-constructed\n";
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &other)
{
	if (this != &other)
	{
		T *newData = new T[other._size];
		for (unsigned int i = 0; i < other._size; i++)
		{
			newData[i] = other._data[i];
		}

		delete[] _data;
		_data = newData;
		_size = other._size;
	}
	std::cout << "Array copy-assigned\n";

	return (*this);
}

template<typename T>
Array<T>::~Array()
{
	delete[] _data;

	std::cout << "Array destructed\n";
}

template<typename T>
Array<T>::Array(unsigned int n) : _data(new T[n]), _size(n)
{
	std::cout << "Array constructed with size\n";
}

template<typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("Array: index out of range");
	return (_data[index]);
}

template<typename T>
const T &Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::out_of_range("Array: index out of range");
	return (_data[index]);
}

template<typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}
