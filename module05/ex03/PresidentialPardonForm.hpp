/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:20:08 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/26 16:50:14 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <string>
# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:

	std::string	target;

public:

	PresidentialPardonForm( std::string target );								//constructor
	PresidentialPardonForm( PresidentialPardonForm const & src);  				//copy
	~PresidentialPardonForm( void );											//destructor
	PresidentialPardonForm & operator=( PresidentialPardonForm const & rhs );	//overload operators

	void	execute( Bureaucrat const & executor ) const;
};

#endif
