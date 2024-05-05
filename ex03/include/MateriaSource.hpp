/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:45:25 by oldault           #+#    #+#             */
/*   Updated: 2024/05/05 19:32:50 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _MATERIASOURCE_HPP_
# define _MATERIASOURCE_HPP_

# define INV_SIZE 10

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
  private:
    AMateria* _materias[INV_SIZE];
    unsigned int _amountStored;
  
  public:
    MateriaSource( void );
    MateriaSource(const MateriaSource& src);
    virtual ~MateriaSource();

    MateriaSource& operator=(const MateriaSource& src);

    void learnMateria(AMateria*);
    AMateria* createMateria(const std::string& type);
};

#endif