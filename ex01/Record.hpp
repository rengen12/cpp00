/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Record.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amichak <amichak@student.unit.ua>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 20:55:00 by amichak           #+#    #+#             */
/*   Updated: 2018/06/18 20:55:00 by amichak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RECORD_HPP
#define RECORD_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Record {
public:
    void fillData(int);
    void printBrief();
    void printFull();
    Record(void);
    ~Record(void);

private:
    int 		id;
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string login;
    std::string postalAddress;
    std::string email;
    std::string phoneNumber;
    std::string birthdayDate;
    std::string favoriteMeal;
    std::string underwearColor;
    std::string darkestSecret;
};


#endif
