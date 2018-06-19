/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Record.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <amichak@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 20:55:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/18 20:55:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Record.hpp"

Record::Record(void) {
}

Record::~Record(void) {
}

void    Record::fillData(int id) {
    this->id = id;
    std::cout << "Enter firstname: ";
    std::getline (std::cin, firstName);
    std::cout << "Enter lastname: ";
    std::getline (std::cin, lastName);
    std::cout << "Enter nickname: ";
    std::getline (std::cin, nickname);
    std::cout << "Enter login: ";
    std::getline (std::cin, login);
    std::cout << "Enter postal address: ";
    std::getline (std::cin, postalAddress);
    std::cout << "Enter email: ";
    std::getline (std::cin, email);
    std::cout << "Enter phone number: ";
    std::getline (std::cin, phoneNumber);
    std::cout << "Enter birthday: ";
    std::getline (std::cin, birthdayDate);
    std::cout << "Enter favorite meal: ";
    std::getline (std::cin, favoriteMeal);
    std::cout << "Enter underwear color: ";
    std::getline (std::cin, underwearColor);
    std::cout << "Enter darkest secret: ";
    std::getline (std::cin, darkestSecret);
}

void    Record::printBrief() {
    std::string tfirstName;
    std::string tlastName;
    std::string tnickname;

    tfirstName = firstName;
    tlastName = lastName;
    tnickname = nickname;
    if (tfirstName.length() > 10) {
        tfirstName.resize(10);
        tfirstName[9] = '.';
    }
    if (tlastName.length() > 10) {
        tlastName.resize(10);
        tlastName[9] = '.';
    }
    if (tnickname.length() > 10) {
        tnickname.resize(10, ' ');
        tnickname[9] = '.';
    }

    std::cout << std::setw(10) << id << '|' << std::setw(10) << tfirstName
              << '|' << std::setw(10) << tlastName << '|' << std::setw(10)
              << tnickname << std::endl;
}

void    Record::printFull() {
    std::cout << "firstname: " << firstName << std::endl;
    std::cout << "lastname: " << lastName << std::endl;
    std::cout << "nickname: " << nickname << std::endl;
    std::cout << "login: " << login << std::endl;
    std::cout << "postal address: " << postalAddress << std::endl;
    std::cout << "email: " << email << std::endl;
    std::cout << "phone number: " << phoneNumber << std::endl;
    std::cout << "birthday date: " << birthdayDate << std::endl;
    std::cout << "favorite meal: " << favoriteMeal << std::endl;
    std::cout << "underwear color: " << underwearColor << std::endl;
    std::cout << "darkest secret: " << darkestSecret << std::endl;
}