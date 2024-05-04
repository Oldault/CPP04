/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:31:42 by oldault           #+#    #+#             */
/*   Updated: 2024/05/04 09:22:52 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
  std::cout << BOLD(FGRN("Animal ")) << UNDL(FGRN("default")) << FGRN(" constructor called\n");

  return ;
}

Brain::~Brain()
{
  std::cout << BOLD(FRED("Brain")) << FRED(" destructor called\n");

  return ;
}

Brain::Brain(const Brain& src)
{
  std::cout << BOLD(FGRN("Brain ")) << FGRN(" copy assignement called\n");
  for (int i = 0; i < 100; i++) {
    _ideas[i] = src._ideas[i];
  }
  
  return ;
}

Brain& Brain::operator=(const Brain& src)
{
  std::cout << BOLD(FGRN("Brain ")) << FGRN(" copy operator called\n");
  if (this != &src) {
    for (int i = 0; i < 100; i++) {
      _ideas[i] = src._ideas[i];
    }
  }

  return *this;
}

void  Brain::setIdea(const std::string& idea, unsigned int index)
{
  if (index >= 100) {
    std::cout << BRED("Index out of reach") "\n";
    return ;
  }
  
  _ideas[index] = idea;
  std::cout << BOLD(FGRN("Idea")) << FGRN(" at index ") UNDL(FGRN( << index << )) FGRN(" was set to: ") UNDL(FGRN( << idea << )) << ".\n";

  return ;
}

std::string  Brain::getIdea(unsigned int index)
{
  if (index >= 100) {
    std::cout << BRED("Index out of reach") "\n";
    return NULL;
  }
  return _ideas[index];
}
