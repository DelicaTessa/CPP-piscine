/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 14:42:34 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/06 16:02:03 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

#include "Zombie.hpp"
#include <iostream>

class ZombieHorde{
    public:
        ZombieHorde(int N);
        ~ZombieHorde();
        void announce(void);
        std::string randomChump(void);

    private:
        Zombie *_zombie;
        int index;
};

#endif