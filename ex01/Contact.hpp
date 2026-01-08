/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 22:10:47 by maballet          #+#    #+#             */
/*   Updated: 2026/01/08 11:29:18 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>
#include <iomanip>

class Contact {

	private:
	
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;

	public:

	Contact( void );
	~Contact( void );
	void setContact(std::string f, std::string l, std::string n, std::string p, std::string d);
	bool isEmpty() const;
	void displayFull() const;
	void displayShort(int index) const;
};

std::string formatColumn(std::string s);

#endif