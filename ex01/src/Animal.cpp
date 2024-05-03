/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:27:25 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/02 14:43:06 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
  std::cout << BOLD(FGRN("Animal ")) << UNDL(FGRN("default")) << FGRN(" constructor called\n");

  return ;
}

Animal::Animal(const std::string& type) : _type(type)
{
  std::cout << BOLD(FGRN("Animal")) << FGRN(" on ") << UNDL(FGRN( << type << )) << FGRN(" constructor called\n");

  return ;
}

Animal::~Animal()
{
  std::cout << BOLD(FRED("Animal")) << FRED(" destructor called\n");

  return ;
}

Animal::Animal(const Animal& src)
{
  *this = src;
  std::cout << BOLD(FGRN("Animal ")) << FGRN(" copy assignement called\n");

  return ;
}

Animal& Animal::operator=(const Animal& src)
{
  std::cout << BOLD(FGRN("Animal ")) << FGRN(" copy operator called\n");
  if (this != &src) {
    _type = src._type;
  }

  return *this;
}

void Animal::makeSound() const 
{
  std::cout << FMAG(ITAL("\t* Unknown animal screeches *\n"));

  return ;
}

std::string Animal::getType() const
{
  return _type;
}