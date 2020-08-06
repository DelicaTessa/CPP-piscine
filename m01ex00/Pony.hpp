/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 16:14:13 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/05 16:44:39 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony{

    public:
        Pony();
        ~Pony();
        void		    set_name(std::string str);
        void		    set_age(std::string str);
        void		    set_color(std::string str);
        void		    set_food(std::string str);
        std::string	    get_name( ) const;
        std::string	    get_age( ) const;
        std::string	    get_color( ) const;
        std::string	    get_food( ) const;

    private:
        std::string _name;
        std::string _age;
        std::string _color;
        std::string _food;
};


#endif
