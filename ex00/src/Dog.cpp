/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:27:38 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/02 14:14:08 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
  std::cout << FGRN("Dog default constructor called\n");

  return ;
}

Dog::~Dog()
{
  std::cout << FRED("Dog destructor called\n");

  return ;
}

Dog::Dog(const Dog& src)
{
  *this = src;
  std::cout << FGRN("Dog copy assignement called\n");

  return ;
}

Dog& Dog::operator=(const Dog& src)
{
  std::cout << FGRN("Dog copy operator called\n");
  if (this != &src) {
    _type = src._type;
  }

  return *this;
}

void Dog::makeSound() const
{
  std::cout << KMAG << ITAL("\t* Loud Barking *\n") << RST;

  return ;
}

