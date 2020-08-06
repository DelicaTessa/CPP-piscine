/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 11:35:44 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/06 14:31:00 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

ZombieEvent::ZombieEvent(void)
{
    return;
}

ZombieEvent::~ZombieEvent(void)
{
    return;
}

void ZombieEvent::setZombieType(std::string type)
{
    this-> _type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    return (new Zombie(name, _type));
}

Zombie* ZombieEvent::randomChump(void)
{
   std::string names[5] = { "Lamebrain", "Lurker", "Meatface", "Cannibal", "Brainsushi"};
   int i;

   i = rand() % 5;
   return (newZombie(names[i]));
}