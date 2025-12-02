/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:02:42 by maballet          #+#    #+#             */
/*   Updated: 2025/11/26 13:58:11 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<cctype>

int	main(int argc, char **argv)
{
	if (argc < 2) {
		if (argc == 1)
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; (argv[i]); i++)
	{
		std::string str = argv[i];
		for (size_t curr_char = 0; curr_char < str.length(); curr_char++)
			str[curr_char] = std::toupper(static_cast<unsigned char>(str[curr_char]));
		std::cout << str;
	}
	std::cout << std:: endl;
	return (0);
}
