/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:18:19 by oldault           #+#    #+#             */
/*   Updated: 2024/05/06 17:25:42 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"

/* Test proposed by the subject */
void testBasicFunctionality()
{
  IMateriaSource *src = new MateriaSource();
  src->learnMateria(new Ice());
  src->learnMateria(new Cure());

  ICharacter *me = new Character("me");

  AMateria *tmp;
  tmp = src->createMateria("ice");
  me->equip(tmp);
  tmp = src->createMateria("cure");
  me->equip(tmp);

  ICharacter *bob = new Character("bob");

  me->use(0, *bob);
  me->use(1, *bob);

  delete bob;
  delete me;
  delete src;
}

/*
  - Can you create an unlearned Materia?
  - How do the uses/equips and unequips
  work relative to the character and the
  Materias?
*/
void testUnlearnedMateriaCreation()
{
  IMateriaSource *src = new MateriaSource();

  AMateria *tmp;
  tmp = src->createMateria("ice");

  src->learnMateria(new Ice());
  tmp = src->createMateria("ice");

  ICharacter *me = new Character("me");
  me->equip(tmp);
  me->use(0, *me);
  me->use(3, *me);
  me->unequip(0);
  me->use(0, *me);
  me->equip(tmp);
  me->use(0, *me);
  me->equip(tmp);
  me->use(1, *me);

  delete me;
  delete src;
}

/*
  - What will happen if you try to equip
  too many Materias?
  - Will the equip() work on any free
  index ?
*/
void testMateriaEquippingLimits()
{
  IMateriaSource *src = new MateriaSource();
  src->learnMateria(new Ice());

  ICharacter *me = new Character("me");
  AMateria *tmp = src->createMateria("ice");
  for (int i = 0; i < 6; i++)
  {
    me->equip(tmp);
  }
  me->use(3, *me);
  me->unequip(1);
  me->equip(tmp);

  delete me;
  delete src;
}

/*
  - What will happen if you try to create
  an unexisting Materia?
*/
void testNonExistentMateriaCreation()
{
  IMateriaSource *src = new MateriaSource();
  src->learnMateria(new Ice());

  ICharacter *me = new Character("me");
  AMateria *tmp;

  tmp = src->createMateria("ice");
  tmp = src->createMateria("water");
  me->equip(tmp);
  me->use(3, *me);
  me->unequip(0);

  tmp = src->createMateria("ice");
  me->equip(tmp);

  delete me;
  delete src;
}
