/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 20:39:54 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/08/31 21:13:53 by koseki.yusu      ###   ########.fr       */
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

            std::cout << "first name: ";
            std::cin >> input;
            std::string firstName = input;

            std::cout << "last name: ";
            std::cin >> input;
            std::string lastName = input;

            std::cout << "nickname: ";
            std::cin >> input;
            std::string nickname = input;

            std::cout << "tell number: ";
            std::cin >> input;
            std::string phoneNumber = input;

            std::cout << "darkest secret: ";
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
