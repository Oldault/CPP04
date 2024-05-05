/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 08:51:49 by oldault           #+#    #+#             */
/*   Updated: 2024/05/05 19:12:30 by oldault          ###   ########.fr       */
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
  std::cout << FRED( "MateriaSource destructor called\n");
  
  return ;
}


MateriaSource& MateriaSource::operator=(const MateriaSource& src)
{
  (void)src;
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
  (void)type;
  AMateria* spell = NULL;

  return spell;
}
