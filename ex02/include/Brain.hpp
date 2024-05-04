/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldault <oldault@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:28:49 by oldault           #+#    #+#             */
/*   Updated: 2024/05/03 15:46:41 by oldault          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BRAIN_HPP_
# define _BRAIN_HPP_

#include "Colors.h"
#include <iostream>
#include <string>

class Brain
{
  protected:
    std::string _ideas[100];

  public:
    Brain( void );
    Brain( const Brain& src);
    ~Brain( void );
    
    Brain& operator=(const Brain& src);

    void  setIdea(const std::string& idea, unsigned int index);
    std::string  getIdea(unsigned int index);
};

#endif