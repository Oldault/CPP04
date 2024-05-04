/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:23:07 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/04 09:59:48 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << std::endl;
	/* Requested Test case */
	{
		const int size = 6;
    Animal** animals = new Animal*[size];
    for (int i = 0; i < size / 2; ++i) {
			animals[i] = new Dog();
    }
    for (int i = size / 2; i < size; ++i) {
			animals[i] = new Cat();
    }
    for (int i = 0; i < size; ++i) {
			animals[i]->makeSound();
    }
    for (int i = 0; i < size; ++i) {
			delete animals[i];
    }
    delete[] animals;
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
