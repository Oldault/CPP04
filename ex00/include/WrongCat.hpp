/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:25:00 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/02 14:24:04 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WRONGCAT_HPP_
# define _WRONGCAT_HPP_

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
  public:

    WrongCat( void );
    WrongCat(const WrongCat& src);
    ~WrongCat( void );

    WrongCat& operator=(const WrongCat& src);

    virtual void makeSound( void ) const;
};

#endif