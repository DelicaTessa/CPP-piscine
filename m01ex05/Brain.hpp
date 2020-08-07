/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/07 13:26:19 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/07 13:35:59 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain{

    public:
        Brain();
        ~Brain();
        std::string identify();

    private:
        std::string _address;

};

#endif