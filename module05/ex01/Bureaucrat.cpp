/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:36:17 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/26 15:57:39 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string name, int grade ) : name(name)
{
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());

	this->grade = grade;
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
    this->name = rhs.name;
    this->grade = rhs.grade;
	return ( *this );
}

std::string	const &	Bureaucrat::getName( void ) const
{
	return (this->name);
}

int					Bureaucrat::getGrade( void ) const
{
	return (this->grade);
}

void				Bureaucrat::increment( void )
{
	if (this->grade - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	
	this->grade--;
	return ;
}

void				Bureaucrat::decrement( void )
{
	if (this->grade + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	
	this->grade++;
	return ;
}

void				Bureaucrat::signForm( Form & form)
{
	if (form.getSign())
		std::cout << "the form \'" << form.getName() << "\' is already sign." << std::endl;
	try
	{
		form.beSigned(*this);
		std::cout << this->name << " has just signed the form \'" << form.getName() << "\'" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << this->name << " cannot sign the form \'" << form.getName() << "\'" ;
		std::cerr << " because " << e.what() << std::endl;
	}
	return ;
}


//// EXCEPTIONS ////


Bureaucrat::GradeTooHighException::GradeTooHighException( void ) throw()
{}

Bureaucrat::GradeTooHighException::GradeTooHighException( const GradeTooHighException & src) throw()
{
	*this = src;
	return ;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException( void ) throw()
{}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException & src) throw() 
{
	(void)src;
	return (*this);
}

const char *	Bureaucrat::GradeTooHighException::what( void ) const throw()
{
	return ("The grade is too high (Max : 1)");
}


Bureaucrat::GradeTooLowException::GradeTooLowException( void ) throw()
{}

Bureaucrat::GradeTooLowException::GradeTooLowException( const GradeTooLowException & src) throw()
{
	*this = src;
	return ;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException( void ) throw()
{}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException & src) throw() 
{
	(void)src;
	return (*this);
}

const char *	Bureaucrat::GradeTooLowException::what( void ) const throw()
{
	return ("The grade is too low (Min : 150)");
}



std::ostream &	operator<<( std::ostream & o, Bureaucrat const & rhs )
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return ( o );
}
