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

PhoneBook::PhoneBook(void) {
    this->numRecords = 0;
}

PhoneBook::~PhoneBook(void) {
}

void PhoneBook::add() {
    if (numRecords < 8) {
        record[numRecords].fillData(numRecords);
        numRecords++;
    } else
        std::cout << "Phonebook is full" << std::endl;
}

void PhoneBook::search() {
    int     index;

    std::cout << std::setw(10) << "index" << '|' << std::setw(10) << "first name"
              << '|' << std::setw(10) << "last name" << '|' << std::setw(10)
              << "nickname" << std::endl;
    for (int i = 0; i < numRecords; i++) {
        record[i].printBrief();
    }
    std::cout << "Enter index to get full info: ";
    std::cin >> index;
    if (index >= 0 && index < numRecords) {
        record[index].printFull();
    } else
        std::cout << "Wrong index!" << std::endl;
}
