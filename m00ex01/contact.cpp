/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:46:42 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/01 15:00:29 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

contact::contact (void)
{
    return;
}

contact::~contact (void)
{
    return;
}

contact    add()
{
        std::string input;
        contact new_contact;

        std::cin.ignore();
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

        return (new_contact); 
}


void information(contact phonebook[], int index)
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

void    index(contact phonebook[], int contacts)
{
    int i;
    int idx;
    std::string firstname;
    std::string lastname;
    std::string nickname;

    i = 0;
    std::cout << "|" << std::setw(10) << "INDEX";
    std::cout << "|" << std::setw(10) << "FIRST NAME";
    std::cout << "|" << std::setw(10) << "LAST NAME";
    std::cout << "|" << std::setw(10) << "NICKNAME";
    std::cout << "|" << std::endl;
    while(i < contacts)
    {
        firstname = phonebook[i].get_firstname();
        lastname = phonebook[i].get_lastname();
        nickname = phonebook[i].get_nickname();
        std::cout << "|" << std::setw(10) << i;
        std::cout << "|" << std::setw(10) << firstname;
        std::cout << "|" << std::setw(10) << lastname;
        std::cout << "|" << std::setw(10) << nickname;
        std::cout << "|" << std::endl;
        i++;
    }
    std::cout << "Please choose the number of the contact you would like to display:" << std::endl;
    std::cin >> idx;
    if (idx < contacts)
        information(phonebook, idx);
    else
    {
        std::cout << "The number you entered is invalid. Please try again." << std::endl;
        index(phonebook, contacts);
    }
}

int main(void)
{
    int i;
    int j;
    i = 0;
    j = 0;
    
    std::string command;
    contact phonebook[8];
    std::cout << "What is your command? Choose ADD, SEARCH or EXIT:";
    std::cin >> command;
    while(command != "EXIT")
    {
        if (command == "ADD")
        {
            if (i >= 8)
                std::cout << "Unfortunately the phonebook is full." << std::endl;
            else if(i < 8)
            {
                phonebook[i] = add();
                i++;
            }
        }
        else if (command == "SEARCH")
        {
            if (i > 0)
                index(phonebook, i);
            else if (i == 0)
                std::cout << "Phonebook is empty."<< std::endl;
        }
        else if (command == "EXIT")
            exit(1);
        else
            std::cout << "Invalid input. Please try again." << std::endl;
        std::cout << "What is your command? Choose ADD, SEARCH or EXIT:";
        std::cin >> command;
    }
    if (command == "EXIT")
        exit(1);
    return (0);
}