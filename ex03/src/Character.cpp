/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:01:19 by oldault           #+#    #+#             */
/*   Updated: 2024/05/04 21:32:37 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string& name) :
  _name(name)
{
  for (int i = 0; i < 4; i++) {
    _inventory[i] = nullptr;
  }
  std::cout << FGRN( "Character " BOLD( << _name << )) << FGRN(" constructor called\n");
  
  return ;
}

Character::Character(const Character& src) :
  _name(src._name)
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

const std::string& Character::getName() const
{
  return _name;
}

void Character::equip(AMateria* m)
{
  (void)m;
  return ;
}

void Character::unequip(int idx)
{
  (void)idx;
  return ;
}

void Character::use(int idx, ICharacter& target)
{
  (void)idx;
  (void)target;
  return ;
}
