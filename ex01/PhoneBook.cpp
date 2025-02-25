/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 21:08:05 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/10/23 16:44:05 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0), oldest(0) {}

void PhoneBook::addContact(const Contact& contact) {
    contacts[oldest] = contact;
    if (count < 8) 
        count++;
    oldest = (oldest + 1) % 8;
}

void PhoneBook::searchContact() const {
    for (int i = 0; i < count; i++) 
        contacts[i].displayShort(i);
    int index;
    std::cout << "please input contact: ";
    if (!(std::cin >> index)) {
        std::cin.clear();
        std::cin.ignore(1024, '\n');
        index = -1;
    }
    if (index >= 0 && index < count)
        contacts[index].displayFull();
    else
        std::cout << "invalid" << std::endl;
}
