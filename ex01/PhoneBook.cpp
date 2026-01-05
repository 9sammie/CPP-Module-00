/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 19:54:28 by maballet          #+#    #+#             */
/*   Updated: 2026/01/05 11:05:08 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

PhoneBook::PhoneBook(void): nextIndex(0) {} //constructor

PhoneBook::~PhoneBook(void) {} //destructor

bool	isInputPrintable(std::string input) {

	int i = 0;
	
	while (input[i]) {

		if (!isprint(input[i])) {
			
			std::cout << "Error: not printable character detected." << std::endl;
			return (false);
		}
		i++;
	}
	return (true);
}

void	PhoneBook::Add() {

	std::string f, l, n, p, d;
	std::cout << "First name: "; std::getline(std::cin, f); if (!isInputPrintable(f)) return;
	std::cout << "Last name: "; std::getline(std::cin, l); if (!isInputPrintable(l)) return;
	std::cout << "Nickname: "; std::getline(std::cin, n); if (!isInputPrintable(n)) return;
	std::cout << "Phone number: "; std::getline(std::cin, p); if (!isInputPrintable(p)) return;
	std::cout << "Darkest secret: "; std::getline(std::cin, d); if (!isInputPrintable(d)) return;
	if (f.empty()||l.empty()||n.empty()||p.empty()||d.empty()) {
		
		std::cout << "Error: one of the field or more is empty." << std::endl;
		return;
	}
	AllContact[nextIndex].setContact(f, l, n, p, d);
	if (++nextIndex > 7)
		nextIndex = 0;
}

// setw

void	PhoneBook::Search() const {

	std::cout << std::endl;
	std::cout << std::setw(10) << "Index" << "|"
	<< std::setw(10) << "First Name" << "|"
	<< std::setw(10) << "Last Name" << "|"
	<< std::setw(10) << "Nickname" << std::endl;
	for (int i = 0; i < 8; i++) {

		if (AllContact[i].isEmpty())
			break;
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
