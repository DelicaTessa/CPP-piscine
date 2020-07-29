/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 18:35:30 by tclement      #+#    #+#                 */
/*   Updated: 2020/07/29 20:03:24 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>


class contact{
   public:
      contact();
     ~contact();


   void  add();
   void menu(void);
   private:
    std::string _firstname;
    std::string _lastname;
    std::string _nickname;
    std::string _login;
    std::string _address;
    std::string _email;
    std::string _meal;
    std::string _underwear;
    std::string _secret;
};

void test(void);
#endif