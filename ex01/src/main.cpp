/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:23:07 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/04 09:53:28 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << std::endl;
	/* General constructors and destructors */
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		delete j;
		delete i;
	}
	std::cout << std::endl;
	/* Setters and Getters for Ideas */
	{
		Cat* cat = new Cat();
		cat->setCatIdea("Bring master a dead mouse", 5);
		std::cout << "\tThe cat is thinking to: " ITAL( << cat->getCatIdea(5) << ) ".\n";
		
		delete cat;
	}
	std::cout << std::endl;
	/* copy assignements/operators for the Brain */
	{
    Dog* dog = new Dog();
    dog->setDogIdea("Catch that squirrel", 10);
    dog->setDogIdea("Shit on the carpet", 42);
    std::cout << "\tDog 1 is thinking to: " ITAL( << dog->getDogIdea(10) << ) ".\n";

    Dog* dog2 = new Dog(*dog);
    std::cout << "\tDog 2 is thinking to: " ITAL( << dog2->getDogIdea(10) << ) ".\n";

		Dog* dog3 = new Dog();
		*dog3 = *dog2;
    std::cout << "\tDog 3 is thinking to: " ITAL( << dog3->getDogIdea(42) << ) ".\n";

    delete dog3;
    delete dog2;
    delete dog;
	}
	
	std::cout << std::endl;
	return 0;
}
