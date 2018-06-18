/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <amichak@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 20:55:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/18 20:55:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef D00_PHONEBOOK_HPP
#define D00_PHONEBOOK_HPP

#include <string>

class PhoneBook {
public:
	const std::string &getFirstName() const;

	const std::string &getLastName() const;

	const std::string &getNickname() const;

	const std::string &getLogin() const;

	const std::string &getPostal_address() const;

	const std::string &getEmail() const;

	const std::string &getAddress() const;

	const std::string &getPhoneNumber() const;

	const std::string &getBirthdayDate() const;

	const std::string &getFavoriteMeal() const;

	const std::string &getUnderwear() const;

	const std::string &getColor() const;

	const std::string &getDarkest() const;

	const std::string &getSecret() const;

	void setFirstName(const std::string &firstName);

	void setLastName(const std::string &lastName);

	void setNickname(const std::string &nickname);

	void setLogin(const std::string &login);

	void setPostal_address(const std::string &postal_address);

	void setEmail(const std::string &email);

	void setAddress(const std::string &address);

	void setPhoneNumber(const std::string &phoneNumber);

	void setBirthdayDate(const std::string &birthdayDate);

	void setFavoriteMeal(const std::string &favoriteMeal);

	void setUnderwear(const std::string &underwear);

	void setColor(const std::string &color);

	void setDarkest(const std::string &darkest);

	void setSecret(const std::string &secret);

private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email;
	std::string address;
	std::string phoneNumber;
	std::string birthdayDate;
	std::string favoriteMeal;
	std::string underwear;
	std::string color;
	std::string darkest;
	std::string secret;
};


#endif //D00_PHONEBOOK_HPP
