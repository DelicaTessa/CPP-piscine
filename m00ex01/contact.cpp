/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:46:42 by tclement      #+#    #+#                 */
/*   Updated: 2020/07/29 20:26:41 by tclement      ########   odam.nl         */
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

void    contact::add()
{
        std::cout << "What is your first name?" << std::endl;
        std::cin >> _firstname;
        std::cout << "What is your last name?" << std::endl;
        std::cout << "What is your nickname?" << std::endl;
        
}


int main(void)
{
    int i;
    i = 0;
    
    std::string command;
    contact phonebook[8];
    std::cout << "What is your command?";
    std::cin >> command;
    while(command != "EXIT")
    {
        if (command == "ADD")
        {
            if (i == 8)
            {
                std::cout << "Unfortunately the phonebook is full" << std::endl;
            }
            if(i < 8 )
            {
               phonebook[i].add();
                i++;
            }
         }
        else if (command == "EXIT")
            exit(1);
        else if (command == "SEARCH")
        {
            std::cout << "under construction" << std::endl;
        }
        else
        {
            std::cout << "Invalid input. Please try again." << std::endl;
        }
        std::cout << "What is your command?";
        std::cin >> command;
    }
    if (command == "EXIT")
        exit(1);
    return (0);
}