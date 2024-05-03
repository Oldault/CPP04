/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:25:00 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/02 14:17:52 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_HPP_
# define _CAT_HPP_

#include "Animal.hpp"

class Cat : public Animal
{
  public:

    Cat( void );
    Cat(const Cat& src);
    ~Cat( void );

    Cat& operator=(const Cat& src);

    virtual void makeSound( void ) const;
};

#endif