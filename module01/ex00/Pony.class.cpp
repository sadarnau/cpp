/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sam <sam@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:55:28 by sam               #+#    #+#             */
/*   Updated: 2020/07/16 17:25:58 by sam              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Pony.class.hpp"

void    Pony::dance()
{
    std::cout << "Pony " << this->name << " is dancing" << std::endl;    
}

void    Pony::run()
{
    std::cout << "Pony " << this->name << " is runing" << std::endl;    
}

Pony::Pony(std::string const name) : name(name)
{
    std::cout << "Pony " << this->name << " has been created" << std::endl;
}

Pony::~Pony()
{
    std::cout << "Pony " << this->name << " has been deleted" << std::endl;
}
