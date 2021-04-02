/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 14:19:16 by sadarnau          #+#    #+#             */
/*   Updated: 2021/04/02 16:37:49 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <string>
# include <iostream>
# include <vector>

class Span
{
private:

		unsigned int		N;
		std::vector<int>	array;

public:

        Span( int N );							//constructor
        Span( Span const & src);				//copy
        ~Span( void );							//destructor
        Span & operator=( Span const & rhs );	//overload operator =

		void			addNumber( int n );
		unsigned int	shortestSpan( void );
		unsigned int	longestSpan( void );

};

#endif
