/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 11:35:37 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/06 13:52:20 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
    _name = name;
    _type = type;
    announce();
    return;
}

Zombie::~Zombie(void)
{
    return;
}

void Zombie::announce(void)
{
  std::cout << "<";
  std::cout << _name;
  std::cout << " (";
  std::cout << _type;
  std::cout << ")> ";
  std::cout << "Braaaaaaaaaaaiiiinnnsss...." << std::endl;
}