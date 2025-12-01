/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 22:10:47 by maballet          #+#    #+#             */
/*   Updated: 2025/12/01 22:18:24 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

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

class	PhoneBook {

private:

	Contact AllContact[8];
	int		nextIndex;
	
public:

	PhoneBook(void);
	~PhoneBook(void);

	void	Add(void);
	void	Search(void) const;
};

std::string formatColumn(std::string s);

#endif