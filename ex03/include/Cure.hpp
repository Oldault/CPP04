/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
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

class Cure : public AMateria
{
  public:
    Cure();
    Cure(const Cure& other);
    virtual ~Cure();

    Cure& operator=(const Cure& other);
    AMateria* clone() const;
    void use(ICharacter& target);
};
