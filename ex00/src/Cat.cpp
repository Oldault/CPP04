/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:28:00 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/02 14:16:46 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
  std::cout << FGRN("Cat default constructor called\n");

  return ;
}

Cat::~Cat()
{
  std::cout << FRED("Cat destructor called\n");

  return ;
}

Cat::Cat(const Cat& src)
{
  *this = src;
  std::cout << FGRN("Cat copy assignement called\n");

  return ;
}

Cat& Cat::operator=(const Cat& src)
{
  std::cout << FGRN("Cat copy operator called\n");
  if (this != &src) {
    _type = src._type;
  }

  return *this;
}

void Cat::makeSound() const
{
  std::cout << KMAG << ITAL("\t* Gentle Meowing and purring  *\n") << RST;

  return ;
}
