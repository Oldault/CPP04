/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:25:00 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/02 14:09:38 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP_
# define _DOG_HPP_

#include "Animal.hpp"

class Dog : public Animal
{
  public:

    Dog( void );
    Dog(const Dog& src);
    ~Dog( void );

    Dog& operator=(const Dog& src);

    virtual void makeSound( void ) const;
};

#endif