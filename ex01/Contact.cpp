/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: koseki.yusuke <koseki.yusuke@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 21:05:19 by koseki.yusu       #+#    #+#             */
/*   Updated: 2024/08/31 21:13:28 by koseki.yusu      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Contact.hpp"

void Contact::setContact(const std::string& first, const std::string& last, const std::string& nick,
                const std::string& phone, const std::string& secret) 
{
    firstName = first;
    lastName = last;
    nickname = nick;
    phoneNumber = phone;
    darkestSecret = secret;
}

void Contact::displayShort(int index) const 
{
    std::cout << "|" << std::setw(10) << index
    << "|" << std::setw(10) << (firstName.length() > 10 ? firstName.substr(0, 9) + "." : firstName)
    << "|" << std::setw(10) << (lastName.length() > 10 ? lastName.substr(0, 9) + "." : lastName)
    << "|" << std::setw(10) << (nickname.length() > 10 ? nickname.substr(0, 9) + "." : nickname)
    << "|" << std::endl;
}

void Contact::displayFull() const 
{
    std::cout << "firstName: " << firstName << std::endl;
    std::cout << "lastName: " << lastName << std::endl;
    std::cout << "nickname: " << nickname << std::endl;
    std::cout << "phoneNumber: " << phoneNumber << std::endl;
    std::cout << "darkestSecret: " << darkestSecret << std::endl;
}
