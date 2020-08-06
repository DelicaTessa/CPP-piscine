/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 14:43:43 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/06 15:58:52 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int N)
{
    int i;
    int j;

    this->_zombie = new Zombie[N];
    index = N;
    for (i = 0; i < N; i++){

        _zombie[i].setZombieType("Horde");
        _zombie[i].setZombieName(randomChump());
    }
    announce();
    delete[] _zombie;
}

void ZombieHorde::announce()
{
    int i;
    for (i = 0; i < index; i++){

        _zombie[i].announce();
    }
}

std::string ZombieHorde::randomChump(void)
{
   std::string names[5] = { "Lamebrain", "Lurker", "Meatface", "Cannibal", "Brainsushi"};
   int i;

   i = rand() % 5;
   return (names[i]);
}

ZombieHorde::~ZombieHorde()
{
    return;
}