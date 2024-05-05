/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:22:28 by oldault           #+#    #+#             */
/*   Updated: 2024/05/05 20:10:54 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() :
  AMateria("ice")
{
  std::cout << FGRN(BOLD("Ice")) << FGRN(" constructor called\n");
  
  return ;
}

Ice::Ice(const Ice& other) :
  AMateria(other)
{
  std::cout << FGRN(BOLD("Ice")) << FGRN(" copy constructor called\n");

  return ;
}

Ice::~Ice()
{
  std::cout << FRED(BOLD("Ice")) << FRED( " destructor called\n");
  
  return ;
}

Ice& Ice::operator=(const Ice& other)
{
  if (this != &other) {
    AMateria::operator=(other);
  }
  std::cout << FGRN(BOLD("Ice")) << FGRN(" copy operator called\n");

  return *this;
}

AMateria* Ice::clone() const
{
  return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
  std::cout << FCYN("* shoots and ice bolt at ") FCYN( << (target.getName()) << " *\n");

  return ;
}
