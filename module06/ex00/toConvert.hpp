/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toConvert.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:45:10 by sadarnau          #+#    #+#             */
/*   Updated: 2021/03/17 14:04:42 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef TOCONVERT_HPP
# define TOCONVERT_HPP

# include <string>
# include <iostream>
# include <cmath>
# include <cfloat>

class toConvert
{
private:

	std::string	in;

public:

	toConvert( std::string in );						//constructor
	toConvert( toConvert const & src);  				//copy
	~toConvert( void );									//destructor
	toConvert & operator=( toConvert const & rhs );		//overload operator =

	char	convToChar( void );
	int		convToInt( void );
	float	convToFloat( void );
	double	convToDouble( void );


	class ImpossibleConv : public std::exception
	{
		public:
			ImpossibleConv( void ) throw();
			ImpossibleConv( const ImpossibleConv & src ) throw();
			virtual ~ImpossibleConv( void ) throw();
			ImpossibleConv & operator= (const ImpossibleConv&) throw();
			virtual const char * what( void ) const throw();
	};
	
	class NonDisplayable : public std::exception
	{
		public:
			NonDisplayable( void ) throw();
			NonDisplayable( const NonDisplayable & src ) throw();
			virtual ~NonDisplayable( void ) throw();
			NonDisplayable & operator= (const NonDisplayable&) throw();
			virtual const char * what( void ) const throw();
	};
};

#endif
