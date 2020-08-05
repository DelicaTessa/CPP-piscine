/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   functions.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 12:50:26 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/05 14:13:35 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact     add()
{
        std::string input;
        Contact     new_contact;

        std::cout << "What is your first name?" << std::endl;
        std::getline (std::cin, input);
        new_contact.set_firstname(input);
        std::cout << "What is your last name?" << std::endl;
        std::getline (std::cin, input);
        new_contact.set_lastname(input);
        std::cout << "What is your nickname?" << std::endl;
        std::getline (std::cin, input);
        new_contact.set_nickname(input);
        std::cout << "What is your login?" << std::endl;
        std::getline (std::cin, input);
        new_contact.set_login(input);
        std::cout << "What is your postal address?" << std::endl;
        std::getline (std::cin, input);
        new_contact.set_address(input);
        std::cout << "What is your email address?" << std::endl;
        std::getline (std::cin, input);
        new_contact.set_email(input);
        std::cout << "What is your phone number?" << std::endl;
        std::getline (std::cin, input);
        new_contact.set_phone(input);
        std::cout << "What is your date of birth?" << std::endl;
        std::getline (std::cin, input);
        new_contact.set_birthday(input);
        std::cout << "What is your favourite meal?" << std::endl;
        std::getline (std::cin, input);
        new_contact.set_meal(input);
        std::cout << "What is your underwear color?" << std::endl;
        std::getline (std::cin, input);
        new_contact.set_underwear(input);
        std::cout << "What is your darkest secret?" << std::endl;
        std::getline (std::cin, input);
        new_contact.set_secret(input);  
        std::cout << "New contact added." << std::endl;    
        return (new_contact); 
}

void        information(Contact phonebook[], int index)
{
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string login;
    std::string address;
    std::string email;
    std::string phone;
    std::string birthday;
    std::string meal;
    std::string underwear;
    std::string secret;

        firstname = phonebook[index].get_firstname();
        lastname = phonebook[index].get_lastname();
        nickname = phonebook[index].get_nickname();
        login = phonebook[index].get_login();
        address = phonebook[index].get_address();
        email = phonebook[index].get_email();
        phone = phonebook[index].get_phone();
        birthday = phonebook[index].get_birthday();
        meal = phonebook[index].get_meal();
        underwear = phonebook[index].get_underwear();
        secret = phonebook[index].get_secret();
        std::cout << "FIRST NAME:" << firstname << std::endl;
        std::cout << "LAST NAME:" << lastname << std::endl;
        std::cout << "NICKNAME:" << nickname << std::endl;
        std::cout << "LOGIN:" << login << std::endl;
        std::cout << "POSTAL ADDRESS:" << address << std::endl;
        std::cout << "EMAIL ADDRESS:" << email << std::endl;
        std::cout << "PHONE NUMBER:" << phone << std::endl;
        std::cout << "DATE OF BIRTH:" << birthday << std::endl;
        std::cout << "FAVOURITE MEAL:" << meal << std::endl;
        std::cout << "COLOR OF UNDERWEAR:" << underwear << std::endl;
        std::cout << "DARKEST SECRET:" << secret << std::endl;
}

void    output(Contact phonebook[], int i)
{
    std::string firstname;
    std::string lastname;
    std::string nickname;

    firstname = phonebook[i].get_firstname();
    lastname = phonebook[i].get_lastname();
    nickname = phonebook[i].get_nickname();

    std::cout << "|" << std::setw(10) << i;
    if (firstname.length() > 10)
    {
        firstname = firstname.substr(0, 9);
        std::cout << "|" << std::setw(9) << firstname;
        std::cout << ".";
    }
    else if (lastname.length() <= 10)
        std::cout << "|" << std::setw(10) << lastname;
    if (lastname.length() > 10)
    {
        lastname = lastname.substr(0, 9);
        std::cout << "|" << std::setw(9) << lastname;
        std::cout << ".";
    } 
    else if (lastname.length() <= 10)
        std::cout << "|" << std::setw(10) << lastname;
    if (nickname.length() > 10)
    {
        nickname = nickname.substr(0, 9);
        std::cout << "|" << std::setw(9) << nickname;
        std::cout << ".";
    }
    else if (nickname.length() <= 10)
        std::cout << "|" << std::setw(10) << nickname;
    std::cout << "|" << std::endl;
}

void        valid_index(Contact phonebook[], int contacts, std::string input)
{
    int idx;

    if (input.length() > 1)
    {
        std::cout << "You have entered a wrong input. Please try again." << std::endl;
        index(phonebook, contacts);
    }
    if (input.length() == 1)
    {
        if (std::isdigit(input[0]) == 1)
        {
            idx = std::atoi(input.c_str());
            if (idx >= 0 && idx < contacts)
                information(phonebook, idx);
            else if (idx < 0 || idx >= contacts)
            {
                std::cout << "You have entered a wrong input. Please try again." << std::endl;
                index(phonebook, contacts);
            }
        }
        else if (std::isdigit(input[0]) == 0)
        {
            std::cout << "You have entered a wrong input. Please try again." << std::endl;
            index(phonebook, contacts);
        }
    }
}

void        index(Contact phonebook[], int contacts)
{
    int i;
    int idx;
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string input;

    i = 0;
    std::cout << "|" << std::setw(10) << "INDEX";
    std::cout << "|" << std::setw(10) << "FIRST NAME";
    std::cout << "|" << std::setw(10) << "LAST NAME";
    std::cout << "|" << std::setw(10) << "NICKNAME" ;
    std::cout << "|" << std::endl;
   
    while(i < contacts)
    {
        output(phonebook, i);
        i++;
    }
    std::cout << "Please choose the number of the contact you would like to display:" << std::endl;
    std::getline(std::cin, input);
    valid_index(phonebook, contacts, input);
}