/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsilva-x <lsilva-x@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 19:20:44 by lsilva-x          #+#    #+#             */
/*   Updated: 2025/05/19 12:01:46 by lsilva-x         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main(void)
{
	std::string	input;
	PhoneBook	book;

	std::cout << "------------------Phone Book-----------------------\n";
	std::cout << "> [PhoneBook]: <ADD> | <SEARCH> | <EXIT> \n";
	std::cout << "> ";
	while (getline(std::cin, input))
	{
		if (!input.compare("ADD"))
			book.addContact();
		else if (!input.compare("SEARCH"))
			book.searchContact();
		else if (!input.compare("CLEAR") || !input.compare("clear"))
		{
			std::cout << "\033[2J\033[H";
			std::cout << "> [PhoneBook]: <ADD> | <SEARCH> | <EXIT> \n";
		}
		else if (!input.compare("EXIT"))
			break ;
		else
		{
			std::cout << "> [PhoneBook]: Command not found 404\n";
			std::cout << "> [PhoneBook]: <ADD> | <SEARCH> | <EXIT> \n";
		}
		std::cout << "------------------Phone Book-----------------------\n";
		std::cout << "> ";
	}
	return (0);
}