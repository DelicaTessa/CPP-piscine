/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:46:42 by tclement      #+#    #+#                 */
/*   Updated: 2020/07/28 19:03:41 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void  ft_basic(void)
{
    std::string command;
    int i;
    i = 0;
    std::cout << "What is your command?";
    std::cin >> command;
    if (command == "ADD")
    {
        while (i < 8)
        {
            contact[i].ft_add();
            i++;
            ft_basic();
        }
        if (i >= 8)
        {
            std::cout << "Unfortunately the phonebook is full" << std::endl;
            ft_basic();
        }
    }
    else if (command == "EXIT")
        exit(1);
    else if (command == "SEARCH")
    {
        std::cout << "under construction";
        ft_basic();
    }
    else
    {
        std::cout << "Invalid input. Please try again." << std::endl;
        ft_basic();
    }
}

void    contact::ft_add()
{
        std::cout << "What is your first name?" << std::endl;
        std::cin >> input[0];
        std::cout << "What is your last name?" << std::endl;
        std::cin >> input[1];
        std::cout << "What is your nickname?" << std::endl;
        std::cin >> input[2];
}

int main(void)
{
    ft_basic();
    return (0);
}