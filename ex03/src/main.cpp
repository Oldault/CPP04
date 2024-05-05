/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 21:11:55 by oldault           #+#    #+#             */
/*   Updated: 2024/05/05 20:07:12 by oldault          ###   ########.fr       */
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

  delete me;
  delete src;
  return 0;
}
