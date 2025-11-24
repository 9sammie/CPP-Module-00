/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:02:42 by maballet          #+#    #+#             */
/*   Updated: 2025/11/24 19:28:09 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
// #include<cctype>

// void	*megaphone(char *str)
// {

// }

int	main(int argc, char **argv)
{
	if (argc != 2) {
		if (argc == 1)
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	std::string str = argv[1];
	for (int i = 0; i <= str.length(); i++)
		str[i] = std::toupper(str[i]);
	std::cout << str << std::endl;
	return (0);
}
