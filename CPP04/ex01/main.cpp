/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42roma.it>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 16:12:45 by mxu               #+#    #+#             */
/*   Updated: 2021/10/11 16:09:35 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include <string>

int main()
{
    const Animal*   j = new Dog();
    const Animal*   i = new Cat();

    delete j;
    delete i;
    std::cout << std::endl << std::endl;
    
    Animal* meta[100];

    for (int i = 0; i < 50; i++)
        meta[i] = new Dog();
    for (int j = 50; j < 100; j++)
        meta[j] = new Cat();
    for (int k = 0; k < 100; k++)
        meta[k]->makeSound();
    for (int m = 0; m < 100; m++)
        delete meta[m];
    std::cout << std::endl << std::endl;

    Dog d;
    Dog d1(d);
    Dog d2 = d;    
    std::cout << d.getType() << std::endl;
    std::cout << d1.getType() << std::endl;
    std::cout << d2.getType() << std::endl;
    std::cout << d.getIdea() << std::endl;
    std::cout << d1.getIdea() << std::endl;
    std::cout << d2.getIdea() << std::endl;
    std::cout << std::endl << std::endl;

    Cat c;
    Cat c1(c);
    Cat c2 = c;    
    std::cout << c.getType() << std::endl;
    std::cout << c1.getType() << std::endl;
    std::cout << c2.getType() << std::endl;
    std::cout << c.getIdea() << std::endl;
    std::cout << c1.getIdea() << std::endl;
    std::cout << c2.getIdea() << std::endl;
    std::cout << std::endl << std::endl;

}
