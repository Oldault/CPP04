/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:11:55 by oldault           #+#    #+#             */
/*   Updated: 2024/05/06 10:11:36 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"

int main()
{
  IMateriaSource* src = new MateriaSource();
  src->learnMateria(new Ice());
  
  ICharacter* me = new Character("me");
  // ICharacter* bob = new Character("bob");
  
  AMateria* tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  me->unequip(1);
  me->unequip(0);


  delete me;
  delete src;
  return 0;
}
