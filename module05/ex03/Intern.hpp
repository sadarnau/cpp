/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:00:38 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/01 14:22:26 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
class Intern
{
private:

public:

	Intern( void );									//default constructor
	Intern( Intern const & src); 	 				//copy
	~Intern( void );								//destructor
	Intern & operator=( Intern const & rhs );		//overload operator =

	Form *	makeForm( std::string const & form, std::string const & target );
};

#endif
