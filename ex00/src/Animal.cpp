/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:27:25 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/02 14:14:14 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
  std::cout << FGRN("Animal default constructor called\n");

  return ;
}

Animal::Animal(const std::string& type) : _type(type)
{
  std::cout << FGRN("Animal constructor called on ") << BOLD_A << KGRN << type << RST << "\n";

  return ;
}

Animal::~Animal()
{
  std::cout << FRED("Animal destructor called\n");

  return ;
}

Animal::Animal(const Animal& src)
{
  *this = src;
  std::cout << FGRN("Animal copy assignement called\n");

  return ;
}

Animal& Animal::operator=(const Animal& src)
{
  std::cout << FGRN("Animal copy operator called\n");
  if (this != &src) {
    _type = src._type;
  }

  return *this;
}

void Animal::makeSound() const 
{
  std::cout << KMAG << ITAL("\t* Unknown animal screeches *\n") << RST;

  return ;
}

std::string Animal::getType() const
{
  return _type;
}