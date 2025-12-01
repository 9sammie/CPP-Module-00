/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:54:28 by maballet          #+#    #+#             */
/*   Updated: 2025/12/01 22:33:34 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

PhoneBook::PhoneBook(void): nextIndex(0) {}

PhoneBook::~PhoneBook(void) {}

void	PhoneBook::Add() {

	std::string f, l, n, p, d;
	std::cout << "First name: "; std::getline(std::cin, f);
	std::cout << "Last name: "; std::getline(std::cin, l);
	std::cout << "Nickname: "; std::getline(std::cin, n);
	std::cout << "Phone number: "; std::getline(std::cin, p);
	std::cout << "Darkest secret: "; std::getline(std::cin, d);
	if (f.empty()||l.empty()||n.empty()||p.empty()||d.empty()) {
		
		std::cout << "Error: none of the fields can be empty." << std::endl;
		return;
	}
	AllContact[nextIndex].setContact(f, l, n, p, d);
	nextIndex = (nextIndex + 1) % 8;
}

void	PhoneBook::Search() const {

	std::cout << std::endl;
	std::cout << std::setw(10) << "Index" << "|"
	<< std::setw(10) << "First Name" << "|"
	<< std::setw(10) << "Last Name" << "|"
	<< std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < 8; i++) {

		if (!AllContact[i].isEmpty())
			AllContact[i].displayShort(i);
	}
	std::cout << std::endl;
	std::cout << "Enter the index you need: ";
	int idx;
	if (!(std::cin >> idx)) {
		std::cin.clear();
		std::cin.ignore(10000,'\n');
		std::cout << "Input is not an index." << std::endl;
		return;
	}
	std::cin.ignore(10000,'\n');
	if (idx < 0 || idx > 7 || AllContact[idx].isEmpty()) {
		std::cout << "Keep it to the index you see." << std::endl;
		return;
	}
	AllContact[idx].displayFull();
}
