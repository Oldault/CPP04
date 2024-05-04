/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:25:00 by svolodin          #+#    #+#             */
/*   Updated: 2024/05/03 16:22:35 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DOG_HPP_
# define _DOG_HPP_

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
  private:
    Brain* _brain;

  public:
    Dog( void );
    Dog(const Dog& src);
    ~Dog( void );

    Dog& operator=(const Dog& src);

    virtual void makeSound( void ) const;
    void  setDogIdea(const std::string& idea, unsigned int index);
    std::string  getDogIdea(unsigned int index);
};

#endif