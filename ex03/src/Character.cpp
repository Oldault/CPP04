/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:01:19 by oldault           #+#    #+#             */
/*   Updated: 2024/05/06 10:09:25 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string& name) :
  _name(name),
  _amountStored(0)
{
  for (int i = 0; i < 4; i++) {
    _inventory[i] = nullptr;
  }
  std::cout << FGRN( "Character " BOLD( << _name << )) << FGRN(" constructor called\n");
  
  return ;
}

Character::Character(const Character& src) :
  _name(src._name),
  _amountStored(src._amountStored)
{
  for (int i = 0; i < 4; i++) {
    _inventory[i] = src._inventory[i];
  }
  std::cout << FGRN("Character copy constructor called from " BOLD( << src._name <<)) "\n";
}

Character::~Character()
{
  for (int i = 0; i < 4; i++) {
    if (_inventory[i] != nullptr) {
      delete _inventory[i];
    }
  }
  std::cout << FRED( "Character " BOLD( << _name << )) << FRED(" destructor called\n");

  return ;
}

Character& Character::operator=(const Character& src)
{
  if (this != &src) {
    _name = src._name;
    _amountStored = src._amountStored;
    for (int i = 0; i < 4; i++) {
      _inventory[i] = src._inventory[i];
    }
  }
  std::cout << FGRN("Character copy operator called from " BOLD( << src._name <<)) "\n";

  return *this;
}


const std::string& Character::getName() const
{
  return _name;
}

void Character::equip(AMateria* m)
{
  if (_amountStored >= 4) {
    std::cout << BRED("Cannot equip any more Materias. Storage capacity (4) exceeded") << "\n";
    return ;
  }
  for (unsigned int i = 0; i < 4; i++) {
    if (_inventory[i] == nullptr) {
      _inventory[i] = m;
      _amountStored++;
      std::cout << FYEL("Character ") << FYEL(BOLD( << _name << )) << FYEL(" just equipped the ") << FYEL(BOLD( << m->getType() << )) << FYEL(" Materia, on slot ") << FYEL(UNDL( << i << )) << FYEL(".\n");
      return ;
    }
  }

  return ;
}

void Character::unequip(int idx)
{
  if (_inventory[idx] == nullptr) {
    std::cout << BRED("Nothing to unequip at slot ") << UNDL(BRED( << idx << )) << ".\n";
    return ;
  }
  std::cout << FYEL("Unequipping slot ") << UNDL(FYEL( << idx << )) << FYEL(" storing the ") << FYEL(BOLD( << _inventory[idx]->getType() <<  )) << FYEL(" Materia.\n");
  delete _inventory[idx];
  _inventory[idx] = nullptr;
  _amountStored--;
  
  return ;
}

void Character::use(int idx, ICharacter& target)
{
  (void)idx;
  (void)target;
  return ;
}
