/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 15:43:34 by tclement      #+#    #+#                 */
/*   Updated: 2020/07/27 18:10:26 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char *ft_strupper(char *s)
{
    int i;

    i = 0;

    while(s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
		    s[i] -= 32;
        i++;
    }
    return (s);
}

int main(int argc, char **argv)
{
    int i;

    i = 1;
   
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else if (argc > 1)
    {
        while(argc > 1)
        {
            ft_strupper(argv[i]);
            std::cout << argv[i];
            i++;
            argc--;
        }
        std::cout << std::endl;
    }
    return (0);
}