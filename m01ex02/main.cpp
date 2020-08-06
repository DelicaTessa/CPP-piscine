/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 11:35:33 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/06 14:38:08 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main(void)
{
    Zombie zombie_one("Tessa", "Crawler");
    Zombie *zombie_two;
    Zombie *zombie_three;
    Zombie *zombie_four;
    Zombie *zombie_five;
    Zombie *zombie_six;
    ZombieEvent event;

    event.setZombieType("Creeper");
    zombie_two = event.newZombie("Creepo");
    zombie_three = event.randomChump();
    zombie_four = event.randomChump();
    event.setZombieType("Killer");
    zombie_five = event.randomChump();
    zombie_six = event.randomChump();

    delete zombie_two;
    delete zombie_three;
    delete zombie_four;
    delete zombie_five;
    delete zombie_six;
    return (0);
}