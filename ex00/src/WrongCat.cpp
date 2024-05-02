/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:28:00 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/02 14:24:54 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
  std::cout << FGRN("WrongCat default constructor called\n");

  return ;
}

WrongCat::~WrongCat()
{
  std::cout << FRED("WrongCat destructor called\n");

  return ;
}

WrongCat::WrongCat(const WrongCat& src)
{
  *this = src;
  std::cout << FGRN("WrongCat copy assignement called\n");

  return ;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
  std::cout << FGRN("WrongCat copy operator called\n");
  if (this != &src) {
    _type = src._type;
  }

  return *this;
}

void WrongCat::makeSound() const
{
  std::cout << KMAG << ITAL("\t* Wrong Meowing and purring  *\n") << RST;

  return ;
}
