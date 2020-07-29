/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 18:35:30 by tclement      #+#    #+#                 */
/*   Updated: 2020/07/28 19:01:27 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>


class contact{
public:
   contact(void);
   ~contact(void);


void  ft_add(void);
private:
 std::string input[11];
};

void  ft_basic(void);



#endif