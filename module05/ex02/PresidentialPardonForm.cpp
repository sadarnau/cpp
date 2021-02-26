/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:20:08 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/26 16:57:14 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("Presidential Pardon", 25, 5), target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) : Form(src), target(src.target)
{
	*this = src;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	return ;
}

PresidentialPardonForm & PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs)
{
    this->target = rhs.target;
	return ( *this );
}

void PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	Form::execute(executor);

	std::cout << this->target << " has been pardoned by Zafod Beeblebrox !" << std::endl;
	return ;
}
