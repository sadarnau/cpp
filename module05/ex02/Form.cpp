/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 15:04:04 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/01 13:41:32 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

Form::Form( std::string name, int rgs, int rge ) :	name(name), sign(false),
													required_grade_sign(rgs), required_grade_exc(rge)
{
	if (rgs > 150 || rge > 150)
		throw (Form::GradeTooLowException());
	else if (rgs < 1 || rge < 1)
		throw (Form::GradeTooHighException());
	return ;
}

Form::Form( Form const & src ) : name(src.name), sign(src.sign),
								required_grade_sign(src.required_grade_sign), required_grade_exc(src.required_grade_exc)
{
	*this = src;
	return ;
}

Form::~Form( void )
{
	return ;
}

Form & Form::operator=( Form const & rhs)
{
    this->sign = rhs.sign;
	return ( *this );
}

std::string const &	Form::getName( void ) const
{
	return (this->name);
}

int					Form::getReq_grd_sign( void ) const
{
	return (this->required_grade_sign);
}

int					Form::getReq_grd_exc( void ) const
{
	return (this->required_grade_exc);
}

bool		 		Form::getSign( void ) const
{
	return (this->sign);
}

void				Form::beSigned( Bureaucrat const & bureacrat )
{
	if (this->required_grade_sign < bureacrat.getGrade())
		throw (Form::GradeTooLowException());
	else
		this->sign = true;

	return ;
}

void				Form::execute( Bureaucrat const & executor ) const
{
	if (!this->sign)
		throw std::string("The form is not signed...");

	if (this->required_grade_exc < executor.getGrade())
		throw (std::string("The grade is too low..."));
	return ;
}



//// EXCEPTIONS ////


Form::GradeTooHighException::GradeTooHighException( void ) throw()
{}

Form::GradeTooHighException::GradeTooHighException( const GradeTooHighException & src) throw()
{
	*this = src;
	return ;
}

Form::GradeTooHighException::~GradeTooHighException( void ) throw()
{}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(const GradeTooHighException & src) throw() 
{
	(void)src;
	return (*this);
}

const char *	Form::GradeTooHighException::what( void ) const throw()
{
	return ("The grade is too high");
}


Form::GradeTooLowException::GradeTooLowException( void ) throw()
{}

Form::GradeTooLowException::GradeTooLowException( const GradeTooLowException & src) throw()
{
	*this = src;
	return ;
}

Form::GradeTooLowException::~GradeTooLowException( void ) throw()
{}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(const GradeTooLowException & src) throw() 
{
	(void)src;
	return (*this);
}

const char *	Form::GradeTooLowException::what( void ) const throw()
{
	return ("The grade is too low");
}



std::ostream &	operator<<( std::ostream & o, Form const & rhs )
{
	o << "The form (" << rhs.getName() << ") is ";
	if (rhs.getSign())
		o << "signed. ";
	else
		o << "not signed. ";
	o << "the required grade to sign is : " << rhs.getReq_grd_sign();
	o << " and the required grade to execute is : " << rhs.getReq_grd_exc() << std::endl;
	return ( o );
}
