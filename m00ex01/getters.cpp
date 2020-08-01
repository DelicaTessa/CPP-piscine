/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   getters.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/01 12:05:04 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/01 12:17:16 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

std::string	contact::get_firstname( ) const { 
     return this->_firstname;
}

std::string	contact::get_lastname( ) const { 
     return this->_lastname;
}

std::string	contact::get_nickname( ) const { 
     return this->_nickname;
}

std::string	contact::get_login( ) const { 
     return this->_login;
}

std::string	contact::get_address( ) const { 
     return this->_address;
}

std::string	contact::get_email( ) const { 
     return this->_email;
}

std::string	contact::get_phone( ) const { 
     return this->_phone;
}

std::string	contact::get_birthday( ) const { 
     return this->_birthday;
}

std::string	contact::get_meal( ) const { 
     return this->_meal;
}

std::string	contact::get_underwear( ) const { 
     return this->_underwear;
}

std::string	contact::get_secret( ) const { 
     return this->_secret;
}