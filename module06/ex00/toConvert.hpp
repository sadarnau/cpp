/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toConvert.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:45:10 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/02 15:53:03 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef TOCONVERT_HPP
# define TOCONVERT_HPP

# include <string>
# include <iostream>

class toConvert
{
private:

	std::string	in;

public:

	toConvert( std::string in );						//constructor
	toConvert( toConvert const & src);  				//copy
	~toConvert( void );									//destructor
	toConvert & operator=( toConvert const & rhs );		//overload operator =

};

#endif
