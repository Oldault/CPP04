/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:27:25 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/02 14:49:17 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
  std::cout << BOLD(FGRN("WrongAnimal ")) << UNDL(FGRN("default")) << FGRN(" constructor called\n");

  return ;
}

WrongAnimal::WrongAnimal(const std::string& type) : _type(type)
{
  std::cout << BOLD(FGRN("WrongAnimal")) << FGRN(" on ") << UNDL(FGRN( << type << )) << FGRN(" constructor called\n");

  return ;
}

WrongAnimal::~WrongAnimal()
{
  std::cout << BOLD(FRED("WrongAnimal")) << FRED(" destructor called\n");

  return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
  *this = src;
  std::cout << BOLD(FGRN("WrongAnimal ")) << FGRN(" copy assignement called\n");

  return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
  std::cout << BOLD(FGRN("WrongAnimal ")) << FGRN(" copy operator called\n");
  if (this != &src) {
    _type = src._type;
  }

  return *this;
}

void WrongAnimal::makeSound() const 
{
  std::cout << FMAG(ITAL("\t* Unknown WrongAnimal screeches *\n"));

  return ;
}

std::string WrongAnimal::getType() const
{
  return _type;
}
