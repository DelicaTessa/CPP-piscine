/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   setters.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 12:04:32 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/01 12:05:26 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void		contact::set_firstname( std::string str ) { 
		this->_firstname = str;		
}

void		contact::set_lastname( std::string str ) { 
		this->_lastname = str;		
}

void		contact::set_nickname( std::string str ) { 
		this->_nickname = str;		
}

void		contact::set_login( std::string str ) { 
		this->_login = str;		
}

void		contact::set_address( std::string str ) { 
		this->_address = str;		
}

void		contact::set_email( std::string str ) { 
		this->_email = str;		
}

void		contact::set_phone( std::string str ) { 
		this->_phone = str;		
}

void		contact::set_birthday( std::string str ) { 
		this->_birthday = str;		
}

void		contact::set_meal( std::string str ) { 
		this->_meal = str;		
}

void		contact::set_underwear( std::string str ) { 
		this->_underwear = str;		
}

void		contact::set_secret( std::string str ) { 
		this->_secret = str;		
}