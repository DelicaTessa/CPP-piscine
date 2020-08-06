/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/06 11:35:41 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/06 13:47:21 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include "ZombieEvent.hpp"
#include <iostream>

class   Zombie{
    public:
        Zombie(std::string name, std::string type);
        ~Zombie();
        void announce();
  
    private:
        std::string _name;
        std::string _type;
};

#endif