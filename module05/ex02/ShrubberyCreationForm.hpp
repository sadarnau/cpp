/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 16:19:46 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/26 16:19:46 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <iostream>

class ShrubberyCreationForm
{
private:


public:

	ShrubberyCreationForm( void );									//default constructor
	ShrubberyCreationForm( std::string name );					//constructor
	ShrubberyCreationForm( ShrubberyCreationForm const & src);  				//copy
	~ShrubberyCreationForm( void );								//destructor
	ShrubberyCreationForm & operator=( ShrubberyCreationForm const & rhs );		//overload operators
};

#endif
