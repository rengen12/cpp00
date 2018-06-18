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

const std::string &PhoneBook::getFirstName() const {
	return firstName;
}

const std::string &PhoneBook::getLastName() const {
	return lastName;
}

const std::string &PhoneBook::getNickname() const {
	return nickname;
}

const std::string &PhoneBook::getLogin() const {
	return login;
}

const std::string &PhoneBook::getPostal_address() const {
	return postal_address;
}

const std::string &PhoneBook::getEmail() const {
	return email;
}

const std::string &PhoneBook::getAddress() const {
	return address;
}

const std::string &PhoneBook::getPhoneNumber() const {
	return phoneNumber;
}

const std::string &PhoneBook::getBirthdayDate() const {
	return birthdayDate;
}

const std::string &PhoneBook::getFavoriteMeal() const {
	return favoriteMeal;
}

const std::string &PhoneBook::getUnderwear() const {
	return underwear;
}

const std::string &PhoneBook::getColor() const {
	return color;
}

const std::string &PhoneBook::getDarkest() const {
	return darkest;
}

const std::string &PhoneBook::getSecret() const {
	return secret;
}

void PhoneBook::setFirstName(const std::string &firstName) {
	PhoneBook::firstName = firstName;
}

void PhoneBook::setLastName(const std::string &lastName) {
	PhoneBook::lastName = lastName;
}

void PhoneBook::setNickname(const std::string &nickname) {
	PhoneBook::nickname = nickname;
}

void PhoneBook::setLogin(const std::string &login) {
	PhoneBook::login = login;
}

void PhoneBook::setPostal_address(const std::string &postal_address) {
	PhoneBook::postal_address = postal_address;
}

void PhoneBook::setEmail(const std::string &email) {
	PhoneBook::email = email;
}

void PhoneBook::setAddress(const std::string &address) {
	PhoneBook::address = address;
}

void PhoneBook::setPhoneNumber(const std::string &phoneNumber) {
	PhoneBook::phoneNumber = phoneNumber;
}

void PhoneBook::setBirthdayDate(const std::string &birthdayDate) {
	PhoneBook::birthdayDate = birthdayDate;
}

void PhoneBook::setFavoriteMeal(const std::string &favoriteMeal) {
	PhoneBook::favoriteMeal = favoriteMeal;
}

void PhoneBook::setUnderwear(const std::string &underwear) {
	PhoneBook::underwear = underwear;
}

void PhoneBook::setColor(const std::string &color) {
	PhoneBook::color = color;
}

void PhoneBook::setDarkest(const std::string &darkest) {
	PhoneBook::darkest = darkest;
}

void PhoneBook::setSecret(const std::string &secret) {
	PhoneBook::secret = secret;
}
