/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:27:25 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/02 14:25:12 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
  std::cout << FGRN("WrongAnimal default constructor called\n");

  return ;
}

WrongAnimal::WrongAnimal(const std::string& type) : _type(type)
{
  std::cout << FGRN("WrongAnimal constructor called on ") << BOLD_A << KGRN << type << RST << "\n";

  return ;
}

WrongAnimal::~WrongAnimal()
{
  std::cout << FRED("WrongAnimal destructor called\n");

  return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
  *this = src;
  std::cout << FGRN("WrongAnimal copy assignement called\n");

  return ;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
  std::cout << FGRN("WrongAnimal copy operator called\n");
  if (this != &src) {
    _type = src._type;
  }

  return *this;
}

void WrongAnimal::makeSound() const 
{
  std::cout << KMAG << ITAL("\t* Wrong sounding Animal screeches *\n") << RST;

  return ;
}

std::string WrongAnimal::getType() const
{
  return _type;
}