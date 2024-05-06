/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 10:16:00 by oldault           #+#    #+#             */
/*   Updated: 2024/05/06 11:44:31 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _AMATERIA_HPP_
# define _AMATERIA_HPP_

#include "Colors.h"
#include <iostream>
#include <string>


class ICharacter;

class AMateria
{
  protected:
    std::string _type;

  public:
    AMateria(const std::string& type);
    AMateria(const AMateria& src);
    virtual ~AMateria();

    AMateria& operator=(const AMateria& src);

    std::string const & getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;
};

#endif