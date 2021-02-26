/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 15:04:04 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/26 16:02:20 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:

	std::string const	name;
	bool				sign;
	int const			required_grade_sign;
	int	const			required_grade_exc;

public:

	Form( std::string name, int rgs, int rge );	//constructor
	Form( Form const & src);  					//copy
	~Form( void );								//destructor
	Form & operator=( Form const & rhs );		//overload operators

	std::string const &	getName( void ) const ;
	int					getReq_grd_sign( void ) const ;
	int					getReq_grd_exc( void ) const ;
	bool 				getSign( void ) const ;

	void				beSigned( Bureaucrat const & bureacrat );

	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException( void ) throw();
			GradeTooHighException( const GradeTooHighException & src ) throw();
			virtual ~GradeTooHighException( void ) throw();
			GradeTooHighException & operator= (const GradeTooHighException&) throw();
			virtual const char * what( void ) const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException( void ) throw();
			GradeTooLowException( const GradeTooLowException & src ) throw();
			virtual ~GradeTooLowException( void ) throw();
			GradeTooLowException & operator= (const GradeTooLowException&) throw();
			virtual const char * what( void ) const throw();
	};
};

std::ostream &	operator<<(std::ostream & o, Form const & rhs);

#endif
