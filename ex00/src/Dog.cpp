/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:27:38 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/02 14:48:14 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
  std::cout << BOLD(FGRN("Dog ")) << UNDL(FGRN("default")) << FGRN(" constructor called\n");

  return ;
}

Dog::~Dog()
{
  std::cout << BOLD(FRED("Dog")) << FRED(" destructor called\n");

  return ;
}

Dog::Dog(const Dog& src)
{
  *this = src;
  std::cout << BOLD(FGRN("Dog ")) << FGRN(" copy assignement called\n");

  return ;
}

Dog& Dog::operator=(const Dog& src)
{
  std::cout << BOLD(FGRN("Dog ")) << FGRN(" copy operator called\n");
  if (this != &src) {
    _type = src._type;
  }

  return *this;
}

void Dog::makeSound() const
{
  std::cout << FMAG(ITAL("\t* Agressive Barking *\n"));
 
  return ;
}
