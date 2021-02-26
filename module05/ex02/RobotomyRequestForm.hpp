/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:19:56 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/26 17:21:37 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:

	std::string	target;

public:

	RobotomyRequestForm( void );									//default constructor
	RobotomyRequestForm( std::string name );					//constructor
	RobotomyRequestForm( RobotomyRequestForm const & src);  				//copy
	~RobotomyRequestForm( void );								//destructor
	RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );		//overload operators

	void	execute( Bureaucrat const & executor ) const;
};

#endif
