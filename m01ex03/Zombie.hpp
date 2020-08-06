/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 11:35:41 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/06 15:50:50 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include "ZombieHorde.hpp"
#include <iostream>

class   Zombie{
    public:
        Zombie();
        ~Zombie();
        void setZombieType(std::string type);
        void setZombieName(std::string name);
        void announce();
  
    private:
        std::string _name;
        std::string _type;
};

#endif