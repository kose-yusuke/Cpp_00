/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 20:39:54 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/23 16:59:40 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Contact.hpp"
#include "includes/PhoneBook.hpp"
#include <iostream>
#include <string>

int main() {
    PhoneBook phoneBook;
    std::string command;

    while (true) {
        std::cout << "please input command (ADD, SEARCH, EXIT): ";
        std::cin >> command;

        if (command == "ADD") {
            Contact newContact;
            std::string input;

            std::cout << "first name (required): ";
            std::cin >> input;
            std::string firstName = input;

            std::cout << "last name (required): ";
            std::cin >> input;
            std::string lastName = input;

            std::cout << "nickname (required): ";
            std::cin >> input;
            std::string nickname = input;

            std::cout << "tell number (required): ";
            std::cin >> input;
            std::string phoneNumber = input;
            for (size_t i = 0; i < phoneNumber.size(); ++i) {
                char& c = phoneNumber[i];
                while (!isdigit(c) && c != '-') {
                    std::cout << "only number or hyphen" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(1024, '\n');
                    std::cin >> input;
                    phoneNumber = input;
                }
            }
            std::cout << "darkest secret (required): ";
            std::cin >> input;
            std::string darkestSecret = input;

            newContact.setContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
            phoneBook.addContact(newContact);
        } 
        else if (command == "SEARCH") 
            phoneBook.searchContact();
        else if (command == "EXIT")
            break;
        else
            std::cout << "invalid command" << std::endl;
    }

    return 0;
}
