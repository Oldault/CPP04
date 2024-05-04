/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:21:17 by oldault           #+#    #+#             */
/*   Updated: 2024/05/04 10:10:35 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGANIMAL_HPP_
# define _WRONGANIMAL_HPP_

#include <Colors.h>
#include <iostream>
#include <string.h>

class WrongAnimal
{
	protected:

    std::string _type;

  public:

    WrongAnimal( void );
    WrongAnimal(const std::string& type);
    WrongAnimal(const WrongAnimal& src);
    virtual ~WrongAnimal( void );

    WrongAnimal& operator=(const WrongAnimal& src);

    void makeSound( void ) const;
    std::string  getType( void ) const;
};

#endif