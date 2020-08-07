/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 16:04:25 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/07 13:24:14 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI, THIS IS BRAIN!";
    std::string *ptr = &str;
    std::string& ref = str;

    std::cout << "Using the string:" << str << std::endl;
    std::cout << "Using a pointer:" << *ptr << std::endl;
    std::cout << "Using a reference:" << ref << std::endl;

    return (0);
}
