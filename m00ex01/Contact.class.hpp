/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.class.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 18:35:30 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/05 14:13:51 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <iomanip>

class    Contact{
   public:
      Contact();
     ~Contact();

   void				set_firstname(std::string str);
   void				set_lastname(std::string str);
   void				set_nickname(std::string str);
   void				set_login(std::string str);
   void				set_address(std::string str);
   void				set_email(std::string str);
   void				set_phone(std::string str);
   void				set_birthday(std::string str);
   void				set_meal(std::string str);
   void				set_underwear(std::string str);
   void				set_secret(std::string str);
	std::string		get_firstname( ) const;
   std::string		get_lastname( ) const;
   std::string		get_nickname( ) const;
   std::string		get_login( ) const;
   std::string		get_address( ) const;
   std::string		get_email( ) const;
   std::string		get_phone( ) const;
   std::string		get_birthday( ) const;
   std::string		get_meal( ) const;
   std::string		get_underwear( ) const;
   std::string		get_secret( ) const;
  
   private:
      std::string _firstname;
      std::string _lastname;
      std::string _nickname;
      std::string _login;
      std::string _address;
      std::string _email;
      std::string _phone;
      std::string _birthday;
      std::string _meal;
      std::string _underwear;
      std::string _secret;
};

Contact  add();
void     valid_index(Contact phonebook[], int contacts, std::string input);
void     index(Contact phonebook[], int contacts);
void     information(Contact phonebook[], int index);
void     output(Contact phonebook[], int i);

#endif