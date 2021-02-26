/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:36:18 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/26 14:47:38 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat
{
private:

	std::string	name;
	int			grade;

public:

	Bureaucrat( std::string const name, int grade );		//constructor
	Bureaucrat( Bureaucrat const & src);  					//copy
	~Bureaucrat( void );									//destructor
	Bureaucrat & operator=( Bureaucrat const & rhs );		//overload operators

	std::string	const & getName( void ) const;
	int					getGrade( void ) const;

	void				increment( void );
	void				decrement( void );

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

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
