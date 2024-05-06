/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 08:51:49 by oldault           #+#    #+#             */
/*   Updated: 2024/05/06 12:01:28 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) :
  _amountStored(0)
{
  for (int i = 0; i < INV_SIZE; i++) {
    _materias[i] = nullptr;
  }
  std::cout << FGRN( "MateriaSource " BOLD( "default" )) << FGRN(" constructor called\n");
  
  return ;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
  _amountStored = src._amountStored;
  for (int i = 0; i < INV_SIZE; i++) {
    _materias[i] = src._materias[i];
  }
  std::cout << FGRN( "MateriaSource " BOLD( "copy" )) << FGRN(" constructor called\n");

  return ;
}

MateriaSource::~MateriaSource()
{
  for (int i = 0; i < INV_SIZE; i++) {
    if (_materias[i] != nullptr) {
      delete _materias[i];
    }
  }
  std::cout << FRED( "MateriaSource destructor called\n");
  
  return ;
}


MateriaSource& MateriaSource::operator=(const MateriaSource& src)
{
  if (this != &src) {
    _amountStored = src._amountStored;
    for (int i = 0; i < INV_SIZE; i++) {
      _materias[i] = src._materias[i];
    }
  }
  std::cout << FGRN( "MateriaSource " BOLD( "copy" )) << FGRN(" operator called\n");
  
  return *this;
}


void MateriaSource::learnMateria(AMateria* materia)
{
  if (_amountStored >= INV_SIZE) {
    std::cout << BRED("Cannot store any more Materias. Storage capacity exceeded") << "\n";
    return ;
  }
  _materias[_amountStored++] = materia;
  
  return ;
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
  for (unsigned int i = 0; i < INV_SIZE; i++) {
    if (_materias[i] && _materias[i]->getType() == type) {
      std::cout << FMAG("Materia of type: ") << FMAG(BOLD( << type << )) << FMAG(", found.") << "\n";
      return _materias[i]->clone();
    }
  }
  std::cout << FMAG("Materia of type: ") << FMAG(BOLD( << type << )) << FMAG(", not found.") << "\n";

  return nullptr;
}
