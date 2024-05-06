/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:11:55 by oldault           #+#    #+#             */
/*   Updated: 2024/05/06 09:43:58 by oldault          ###   ########.fr       */
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
  
  AMateria* tmp;
  tmp = src->createMateria("ice");
  tmp = src->createMateria("water");

  (void)tmp;
  ICharacter* me = new Character("me");

  delete me;
  delete src;
  return 0;
}
