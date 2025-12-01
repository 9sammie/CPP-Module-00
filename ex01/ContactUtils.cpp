/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contactUtils.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maballet <maballet@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 21:33:28 by maballet          #+#    #+#             */
/*   Updated: 2025/12/01 21:35:48 by maballet         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

std::string formatColumn(std::string s) {

	if (s.size() > 10)
		return s.substr(0, 9) + ".";
	return s;
}