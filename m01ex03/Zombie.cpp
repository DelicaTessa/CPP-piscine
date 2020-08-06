/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 11:35:37 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/06 15:50:40 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

Zombie::Zombie()
{
    return;
}

Zombie::~Zombie(void)
{
    return;
}

void Zombie::setZombieType(std::string type)
{
    this-> _type = type;
}

void Zombie::setZombieName(std::string name)
{
    this-> _name = name;
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