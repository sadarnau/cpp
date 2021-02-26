/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:36:17 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/26 13:01:48 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void )
{
	return ;
}

Bureaucrat::Bureaucrat( std::string name )
{
	return ;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src )
{
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat( void )
{
	return ;
}

Bureaucrat & Bureaucrat::operator=( Bureaucrat const & rhs)
{
    this->??? = rhs.???;
	return ( *this );
}

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.getName() << " , bureaucrat grade " << rhs.getGrade() << std::endl;
	return ( o );
}
