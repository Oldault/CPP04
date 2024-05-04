/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:20:21 by oldault           #+#    #+#             */
/*   Updated: 2024/05/04 21:21:43 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string & type) :
  _type(type)
{
  std::cout << FGRN(BOLD("AMateria") " of type: " UNDL( << _type << ) " constructor called\n");

  return ;
}

AMateria::AMateria(const AMateria& src) :
  _type(src._type)
{
  std::cout << FGRN(BOLD("AMateria") " copy constructor called\n");
 
  return ;
}

AMateria::~AMateria()
{
  std::cout << FRED(BOLD("AMateria") " destructor called\n");

  return ;
}

AMateria& AMateria::operator=(const AMateria&src)
{
  if (this != &src) {
    _type = src._type;
  }
  std::cout << FRED(BOLD("AMateria") " copy operator called\n");
  
  return *this;
}

const std::string& AMateria::getType() const
{
  return _type;
}

// AMateria* AMateria::clone() const
// {
//   return new AMateria();
// }

void  AMateria::use(ICharacter& target)
{
  (void)target;

  return ;
}
