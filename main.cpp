/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <amichak@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 20:55:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/18 20:55:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int 	add()
{
	std::cout << "add" << std::endl;
}

int 	search()
{
	std::cout << "search" << std::endl;
}

int main() {
	std::string buf;
	PhoneBook phoneBook[9];

	while (1) {
		std::cout << "Enter command: ";
//		std::cin >> buf;
//		std::getline(std::cin, buf);
		std::cout << std::endl;

		if (buf == "ADD")
			add();
		else if (buf == "SEARCH")
			search();
		else if (buf == "EXIT")
			break;
		else
			std::cout << "Unrecognized command. Try again" << std::endl;
	}
	return (0);
}