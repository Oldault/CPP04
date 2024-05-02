/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:28:00 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/02 14:50:05 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
  std::cout << BOLD(FGRN("WrongCat ")) << UNDL(FGRN("default")) << FGRN(" constructor called\n");

  return ;
}

WrongCat::~WrongCat()
{
  std::cout << BOLD(FRED("WrongCat")) << FRED(" destructor called\n");

  return ;
}

WrongCat::WrongCat(const WrongCat& src)
{
  *this = src;
  std::cout << BOLD(FGRN("WrongCat ")) << FGRN(" copy assignement called\n");

  return ;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
  std::cout << BOLD(FGRN("WrongCat ")) << FGRN(" copy operator called\n");
  if (this != &src) {
    _type = src._type;
  }

  return *this;
}

void WrongCat::makeSound() const
{
  std::cout << FMAG(ITAL("\t* Strange Meowing *\n"));
 
  return ;
}
