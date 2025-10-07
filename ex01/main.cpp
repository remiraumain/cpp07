/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rraumain <rraumain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 17:05:40 by rraumain          #+#    #+#             */
/*   Updated: 2025/10/07 18:06:40 by rraumain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <cctype>
#include <string>

void add_one(int &x)
{
	x++;
}

void toUpper(std::string &s)
{
	for (std::size_t i = 0; i < s.size(); i++)
		s[i] = toupper(s[i]);
}

void print(const std::string &s)
{
	std::cout << s;
}

int main() {
    int a[] = {1,2,3,4};
	
	for (int i = 0; i < 4; i++)
		std::cout << a[i] << "\n";

	std::cout << "\n";
	::iter(a, 4, add_one);

	for (int i = 0; i < 4; i++)
		std::cout << a[i] << "\n";

	std::cout << "\n\n";
	std::string b[] = { "hello", "i wish to be uppercase"};


	for (int i = 0; i < 2; i++)
		std::cout << b[i] << "\n";

	std::cout << "\n";
	::iter(b, 2, toUpper);

	for (int i = 0; i < 2; i++)
		std::cout << b[i] << "\n";

	const std::string c[] = { "This cannot be", " modified ", "because it's a const"};
	::iter(c, 3, print);
	std::cout << "\n";

	return (0);
}