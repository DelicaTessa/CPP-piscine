/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 11:25:43 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/06 11:32:17 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    memoryLeak()
{
    std::string* panther = new std::string("String panther");
    std::cout << *panther << std::endl;
    delete panther;
}
