/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mxu <mxu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 16:12:45 by mxu               #+#    #+#             */
/*   Updated: 2021/10/12 14:49:02 by mxu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal*   meta = new Animal();
    const Animal*   j = new Dog();
    const Animal*   i = new Cat();

    std::cout << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();
    std::cout << std::endl;

    const WrongAnimal*   k = new WrongCat();
    
    std::cout << k->getType() << " " << std::endl;
    k->makeSound();
    std::cout << std::endl;

    delete meta;
    delete j;
    delete i; 
    delete k;

    return 0;
}
