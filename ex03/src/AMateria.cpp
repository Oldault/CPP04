/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:20:21 by oldault           #+#    #+#             */
/*   Updated: 2024/05/06 09:43:00 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string & type) :
  _type(type)
{
  std::cout << FGRN(BOLD("AMateria")) << FGRN(" of type: ") << FGRN(UNDL( << _type << )) << FGRN(" constructor called\n");

  return ;
}

AMateria::AMateria(const AMateria& src) :
  _type(src._type)
{
  std::cout << FGRN(BOLD("AMateria")) << FGRN(" copy constructor called\n");
 
  return ;
}

AMateria::~AMateria()
{
  std::cout << FRED(BOLD("AMateria")) << FRED(" destructor called\n");

  return ;
}

AMateria& AMateria::operator=(const AMateria&src)
{
  if (this != &src) {
    _type = src._type;
  }
  std::cout << FGRN(BOLD("AMateria")) << FGRN(" copy operator called\n");
  
  return *this;
}

const std::string& AMateria::getType() const
{
  return _type;
}

void  AMateria::use(ICharacter& target)
{
  (void)target;

  return ;
}
