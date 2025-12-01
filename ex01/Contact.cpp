/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:51:55 by maballet          #+#    #+#             */
/*   Updated: 2025/12/01 21:40:21 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

Contact::Contact( void ) {}

Contact::~Contact( void ) {}

void Contact::setContact(std::string f, std::string l, std::string n, std::string p, std::string d) {

	firstName = f;
	lastName = l;
	nickName = n;
	phoneNumber = p;
	darkestSecret = d;
}

bool Contact::isEmpty() const {

	return firstName.empty();
}

void Contact::displayFull() const {
	
	std::cout << "First name: " << firstName << std::endl;
	std::cout << "Last name: " << lastName << std::endl;
	std::cout << "Nickname: " << nickName << std::endl;
	std::cout << "Phone number: " << phoneNumber << std::endl;
	std::cout << "Darkest secret: " << darkestSecret << std::endl;
}

void Contact::displayShort(int index) const {

	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << formatColumn(firstName) << "|";
	std::cout << std::setw(10) << formatColumn(lastName) << "|";
	std::cout << std::setw(10) << formatColumn(nickName) << std::endl;
}
