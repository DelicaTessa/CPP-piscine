/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 18:46:42 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/05 14:13:32 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

Contact::Contact (void)
{
    return;
}

Contact::~Contact (void)
{
    return;
}

void		Contact::set_firstname( std::string str ) { 
		this->_firstname = str;		
}

void		Contact::set_lastname( std::string str ) { 
		this->_lastname = str;		
}

void		Contact::set_nickname( std::string str ) { 
		this->_nickname = str;		
}

void		Contact::set_login( std::string str ) { 
		this->_login = str;		
}

void		Contact::set_address( std::string str ) { 
		this->_address = str;		
}

void		Contact::set_email( std::string str ) { 
		this->_email = str;		
}

void		Contact::set_phone( std::string str ) { 
		this->_phone = str;		
}

void		Contact::set_birthday( std::string str ) { 
		this->_birthday = str;		
}

void		Contact::set_meal( std::string str ) { 
		this->_meal = str;		
}

void		Contact::set_underwear( std::string str ) { 
		this->_underwear = str;		
}

void		Contact::set_secret( std::string str ) { 
		this->_secret = str;		
}

std::string	Contact::get_firstname( ) const { 
     return this->_firstname;
}

std::string	Contact::get_lastname( ) const { 
     return this->_lastname;
}

std::string	Contact::get_nickname( ) const { 
     return this->_nickname;
}

std::string	Contact::get_login( ) const { 
     return this->_login;
}

std::string	Contact::get_address( ) const { 
     return this->_address;
}

std::string	Contact::get_email( ) const { 
     return this->_email;
}

std::string	Contact::get_phone( ) const { 
     return this->_phone;
}

std::string	Contact::get_birthday( ) const { 
     return this->_birthday;
}

std::string	Contact::get_meal( ) const { 
     return this->_meal;
}

std::string	Contact::get_underwear( ) const { 
     return this->_underwear;
}

std::string	Contact::get_secret( ) const { 
     return this->_secret;
}