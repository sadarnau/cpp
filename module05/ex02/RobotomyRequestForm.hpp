/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:19:56 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/26 16:19:56 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <string>
# include <iostream>

class RobotomyRequestForm
{
private:


public:

	RobotomyRequestForm( void );									//default constructor
	RobotomyRequestForm( std::string name );					//constructor
	RobotomyRequestForm( RobotomyRequestForm const & src);  				//copy
	~RobotomyRequestForm( void );								//destructor
	RobotomyRequestForm & operator=( RobotomyRequestForm const & rhs );		//overload operators
};

#endif
