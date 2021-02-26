/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:19:56 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/26 17:26:56 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("Robotomy Request", 72, 45), target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) : Form(src), target(src.target)
{
	*this = src;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs)
{
    this->target = rhs.target;
	return ( *this );
}

void RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	Form::execute(executor);

	srand (time(NULL));
	std::cout << "* drilling noises *" << std::endl;
	
	if (rand() % 2 == 1)
		std::cout << this->target << " has been Robotomized" << std::endl;
	else
		std::cout << " the Robotomization has been a failure...." << std::endl;
	
	return ;
}
