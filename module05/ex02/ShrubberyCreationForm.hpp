/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:19:46 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/26 16:58:44 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:

	std::string	target;

public:

	ShrubberyCreationForm( std::string target );							//constructor
	ShrubberyCreationForm( ShrubberyCreationForm const & src);  			//copy
	~ShrubberyCreationForm( void );											//destructor
	ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs );	//overload operator

	void	execute( Bureaucrat const & executor ) const;
};

#endif
