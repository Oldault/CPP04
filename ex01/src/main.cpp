/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:23:07 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/04 09:41:43 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		delete j;
		delete i;
	}
	std::cout << std::endl;
	{
		Cat* cat = new Cat();
		cat->setCatIdea("Shit on the carpet 😸", 5);
		std::cout << "The cat is thinking to: " ITAL( << cat->getCatIdea(5) << ) ".\n";
		
		delete cat;
	}
	std::cout << std::endl;
	{
    Dog* dog = new Dog();
    dog->setDogIdea("Catch that squirrel", 10);
    std::cout << "Dog 1 is thinking to: " << dog->getDogIdea(10) << ".\n";

    Dog* dog2 = new Dog(*dog);
    std::cout << "Dog 2 is thinking to: " << dog2->getDogIdea(10) << ".\n";

		Dog* dog3 = new Dog();
		*dog3 = *dog2;
    std::cout << "Dog 3 is thinking to: " << dog3->getDogIdea(10) << ".\n";

    delete dog3;
    delete dog2;
    delete dog;
	}
	
	std::cout << std::endl;
	return 0;
}
