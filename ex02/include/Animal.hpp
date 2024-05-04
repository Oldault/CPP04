/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:23:24 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/04 10:04:33 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ANIMAL_HPP_
# define _ANIMAL_HPP_

#include <Colors.h>
#include <iostream>
#include <string.h>

class Animal
{
	protected:

    std::string _type;

  public:

    Animal( void );
    Animal(const std::string& type);
    Animal(const Animal& src);
    virtual ~Animal( void );

    Animal& operator=(const Animal& src);

    virtual void makeSound( void ) const = 0;
    std::string  getType( void ) const;
};

#endif
