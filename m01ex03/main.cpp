/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 14:44:26 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/06 16:01:10 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

int main(void)
{
    ZombieHorde one = ZombieHorde(20);
    std::cout << std::endl;
    ZombieHorde two = ZombieHorde(3);
    return(0);
}