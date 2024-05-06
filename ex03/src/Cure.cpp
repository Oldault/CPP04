/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:22:28 by oldault           #+#    #+#             */
/*   Updated: 2024/05/05 20:10:54 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() :
  AMateria("cure")
{
  std::cout << FGRN(BOLD("Cure")) << FGRN(" constructor called\n");
  
  return ;
}

Cure::Cure(const Cure& other) :
  AMateria(other)
{
  std::cout << FGRN(BOLD("Cure")) << FGRN(" copy constructor called\n");

  return ;
}

Cure::~Cure()
{
  std::cout << FRED(BOLD("Cure")) << FRED( " destructor called\n");
  
  return ;
}

Cure& Cure::operator=(const Cure& other)
{
  if (this != &other) {
    AMateria::operator=(other);
  }
  std::cout << FGRN(BOLD("Cure")) << FGRN(" copy operator called\n");

  return *this;
}

AMateria* Cure::clone() const
{
  return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
  std::cout << FCYN("\t* heals ") FCYN( << (target.getName()) << "'s wounds \n");

  return ;
}
