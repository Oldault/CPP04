/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:28:00 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/02 14:47:19 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
  std::cout << BOLD(FGRN("Cat ")) << UNDL(FGRN("default")) << FGRN(" constructor called\n");

  return ;
}

Cat::~Cat()
{
  std::cout << BOLD(FRED("Cat")) << FRED(" destructor called\n");

  return ;
}

Cat::Cat(const Cat& src)
{
  *this = src;
  std::cout << BOLD(FGRN("Cat ")) << FGRN(" copy assignement called\n");

  return ;
}

Cat& Cat::operator=(const Cat& src)
{
  std::cout << BOLD(FGRN("Cat ")) << FGRN(" copy operator called\n");
  if (this != &src) {
    _type = src._type;
  }

  return *this;
}

void Cat::makeSound() const
{
  std::cout << FMAG(ITAL("\t* Gentle Meowing and purring *\n"));
 
  return ;
}
