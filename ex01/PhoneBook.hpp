/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 11:28:45 by maballet          #+#    #+#             */
/*   Updated: 2026/01/08 15:53:52 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class	PhoneBook {

private:

	Contact _allContact[8];
	int		_nextIndex;

public:

	PhoneBook(void);
	~PhoneBook(void);

	void	Add(void);
	void	Search(void) const;
};

#endif