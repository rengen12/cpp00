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

#include "PhoneBook.hpp"

int main() {
	std::string buf;
	PhoneBook	phoneBook;

	while (1) {
		std::cout << "Enter command (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, buf);

		if (feof(stdin) || buf == "EXIT") {
			std::cout << "EXIT" << std::endl;
			break;
		} else if (buf == "ADD")
			phoneBook.add();
		else if (buf == "SEARCH")
			phoneBook.search();
		else
			std::cout << "Unrecognized command. Try again" << std::endl;
	}
	return (0);
}
