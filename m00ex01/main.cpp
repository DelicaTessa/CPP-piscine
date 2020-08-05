/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 12:51:27 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/05 15:22:34 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

int main(void)
{
    std::string command;
    Contact     phonebook[8];
    int i;
    int j;

    i = 0;
    j = 0;
    
    std::cout << "Welcome to the phonebook!" << std::endl;
    std::cout << "What is your command? Choose ADD, SEARCH or EXIT:";
    std::getline(std::cin, command);
    while(command != "EXIT")
    {
        if (command == "ADD")
        {
            if (i >= 8)
                std::cout << "Unfortunately the phonebook is full. Cannot add new contact." << std::endl;
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
                std::cout << "Phonebook is empty. Please add a contact first."<< std::endl;
        }
        else if (command == "EXIT")
        {
        std::cout << "Goodbye." << std::endl;
        exit(1);
        }
        else if (std::cin.good() != 1)
            return (0);
        else
            std::cout << "Invalid input. Please try again." << std::endl;
        std::cout << "What is your command? Choose ADD, SEARCH or EXIT:";
        std::getline(std::cin, command);
    }
    if (command == "EXIT")
    {
        std::cout << "Goodbye." << std::endl;
        exit(1);
    }
    return (0);
}