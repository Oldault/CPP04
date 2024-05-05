/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 19:17:41 by oldault           #+#    #+#             */
/*   Updated: 2024/05/05 20:03:31 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
  public:
    Ice();
    Ice(const Ice& other);
    virtual ~Ice();

    Ice& operator=(const Ice& other);
    AMateria* clone() const;
    void use(ICharacter& target);
};
