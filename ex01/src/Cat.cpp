/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:28:00 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/04 09:44:51 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() :
  Animal("Cat")
{
  std::cout << BOLD(FGRN("Cat ")) << UNDL(FGRN("default")) << FGRN(" constructor called\n");
  _brain = new Brain();

  return ;
}

Cat::~Cat()
{
  std::cout << BOLD(FRED("Cat")) << FRED(" destructor called\n");
  delete _brain;
  _brain = nullptr;

  return ;
}

Cat::Cat(const Cat& src) :
  Animal(src)
{
  _type = src._type;
  _brain = new Brain(*src._brain);
  std::cout << BOLD(FGRN("Cat ")) << FGRN(" copy assignement called\n");

  return ;
}

Cat& Cat::operator=(const Cat& src)
{
  std::cout << BOLD(FGRN("Cat ")) << FGRN(" copy operator called\n");
  if (this != &src) {
    Animal::operator=(src);
    _type = src._type;
    Brain *tempBrain = new Brain(*src._brain);
    delete _brain;
    _brain = tempBrain;
  }

  return *this;
}

void Cat::makeSound() const
{
  std::cout << FMAG(ITAL("\t* Gentle Meowing and purring *\n"));
 
  return ;
}

void  Cat::setCatIdea(const std::string& idea, unsigned int index)
{
  _brain->setIdea(idea, index);

  return ;
}

std::string  Cat::getCatIdea(unsigned int index)
{
  return _brain->getIdea(index);
}
