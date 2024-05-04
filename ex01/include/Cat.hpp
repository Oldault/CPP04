/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:25:00 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/03 15:59:22 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CAT_HPP_
# define _CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
  private:
    Brain* _brain;
  
  public:
    Cat( void );
    Cat(const Cat& src);
    ~Cat( void );

    Cat& operator=(const Cat& src);

    virtual void makeSound( void ) const;
    void  setCatIdea(const std::string& idea, unsigned int index);
    std::string  getCatIdea(unsigned int index);
};

#endif