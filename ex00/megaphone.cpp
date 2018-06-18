/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <amichak@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 19:18:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/18 19:18:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int 	capitalChar(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

void	printCapital(char str[])
{
	while (*str)
		std::cout << (char)capitalChar(*str++);
}

int 	main(int argc, char* argv[])
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
		printCapital(argv[i]);
	std::cout << std::endl;
	return (0);
}
