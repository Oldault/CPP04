/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:27:38 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/04 10:01:04 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() :
  Animal("Dog")
{
  std::cout << BOLD(FGRN("Dog ")) << UNDL(FGRN("default")) << FGRN(" constructor called\n");
  _brain = new Brain();

  return ;
}

Dog::~Dog()
{
  delete _brain;
  _brain = nullptr;
  std::cout << BOLD(FRED("Dog")) << FRED(" destructor called\n");

  return ;
}

Dog::Dog(const Dog& src) :
  Animal(src)
{
  _type = src._type;
  _brain = new Brain(*src._brain);
  std::cout << BOLD(FGRN("Dog ")) << FGRN(" copy assignement called\n");

  return ;
}

Dog& Dog::operator=(const Dog& src)
{
  std::cout << BOLD(FGRN("Dog ")) << FGRN(" copy operator called\n");
  if (this != &src) {
    Animal::operator=(src);
    _type = src._type;
    Brain *tempBrain = new Brain(*src._brain);
    delete _brain;
    _brain = tempBrain;
  }

  return *this;
}

void Dog::makeSound() const
{
  std::cout << FMAG(ITAL("\t* Agressive Barking *\n"));
 
  return ;
}

void  Dog::setDogIdea(const std::string& idea, unsigned int index)
{
  _brain->setIdea(idea, index);

  return ;
}

std::string  Dog::getDogIdea(unsigned int index)
{
  return _brain->getIdea(index);
}
