/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:20:08 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/26 16:20:08 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include <iostream>

class PresidentialPardonForm
{
private:


public:

	PresidentialPardonForm( void );									//default constructor
	PresidentialPardonForm( std::string name );					//constructor
	PresidentialPardonForm( PresidentialPardonForm const & src);  				//copy
	~PresidentialPardonForm( void );								//destructor
	PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs );		//overload operators
};

#endif
