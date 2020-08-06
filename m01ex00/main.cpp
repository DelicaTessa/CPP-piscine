/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tclement <tclement@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/05 16:14:17 by tclement      #+#    #+#                 */
/*   Updated: 2020/08/06 11:11:34 by tclement      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

static  void PonyOnTheHeap(void)
{
    Pony *Flippo = new Pony;

    Flippo->set_name("Flippo");
    Flippo->set_age("31");
    Flippo->set_color("Light brown");
    Flippo->set_food("Apples");
    std::cout << "NAME:" << Flippo->get_name() << std::endl;
    std::cout << "AGE:" << Flippo->get_age() << std::endl;
    std::cout << "COLOR:" << Flippo->get_color() << std::endl;
    std::cout << "FAVORITE FOOD:" << Flippo->get_food() << std::endl;
    delete Flippo;
}

static  void PonyOnTheStack(void)
{
    Pony Rambo;

    Rambo.set_name("Rambo");
    Rambo.set_age("33");
    Rambo.set_color("Light brown");
    Rambo.set_food("Carrots");
    std::cout << "NAME:" << Rambo.get_name() << std::endl;
    std::cout << "AGE:" << Rambo.get_age() << std::endl;
    std::cout << "COLOR:" << Rambo.get_color() << std::endl;
    std::cout << "FAVORITE FOOD:" << Rambo.get_food() << std::endl;
}

int main(void)
{
    std::cout << "Pony on the heap:" << std::endl;
    PonyOnTheHeap();
    std::cout << std::endl;
    std::cout << "Pony on the stack:" << std::endl;
    PonyOnTheStack();
    return (0);
}