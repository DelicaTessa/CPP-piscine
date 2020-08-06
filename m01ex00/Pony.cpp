/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 16:14:06 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/06 11:15:46 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony (void)
{
    return;
}

Pony::~Pony (void)
{
    return;
}

void		Pony::set_name(std::string str) { 
		this->_name = str;		
}

void		Pony::set_age(std::string str) { 
		this->_age = str;		
}

void		Pony::set_color(std::string str) { 
		this->_color = str;		
}

void		Pony::set_food(std::string str) { 
		this->_food = str;		
}

std::string	Pony::get_name( ) const { 
     return this->_name;
}

std::string	Pony::get_age( ) const { 
     return this->_age;
}

std::string	Pony::get_color( ) const { 
     return this->_color;
}

std::string	Pony::get_food( ) const { 
     return this->_food;
}