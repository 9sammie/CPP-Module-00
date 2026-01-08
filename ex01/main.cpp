/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:57:52 by maballet          #+#    #+#             */
/*   Updated: 2026/01/08 15:50:47 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main()
{
	PhoneBook	PhoneBook;
	std::string input;
	
	while (true)
	{
		std::cout << "Enter the command ADD, SEARCH or EXIT: ";
		if (!std::getline(std::cin, input))
			break;
		if (input == "ADD")
			PhoneBook.Add();
		else if (input == "SEARCH")
			PhoneBook.Search();
		else if (input == "EXIT")
			break;
	}
	return (0);
}
