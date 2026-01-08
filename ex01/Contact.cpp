/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:51:55 by maballet          #+#    #+#             */
/*   Updated: 2026/01/08 15:50:24 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void ) {}

Contact::~Contact( void ) {}

void Contact::setContact(std::string f, std::string l, std::string n, std::string p, std::string d) {

	_firstName = f;
	_lastName = l;
	_nickName = n;
	_phoneNumber = p;
	_darkestSecret = d;
}

bool Contact::isEmpty() const {

	return _firstName.empty();
}

void Contact::displayFull() const {
	
	std::cout << "First name: " << _firstName << std::endl;
	std::cout << "Last name: " << _lastName << std::endl;
	std::cout << "Nickname: " <<_nickName << std::endl;
	std::cout << "Phone number: " << _phoneNumber << std::endl;
	std::cout << "Darkest secret: " << _darkestSecret << std::endl;
}

void Contact::displayShort(int index) const {

	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << formatColumn(_firstName) << "|";
	std::cout << std::setw(10) << formatColumn(_lastName) << "|";
	std::cout << std::setw(10) << formatColumn(_nickName) << std::endl;
}
