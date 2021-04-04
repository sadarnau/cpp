/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 16:54:40 by sadarnau          #+#    #+#             */
/*   Updated: 2021/04/04 17:00:09 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <string>
# include <iostream>
# include <vector>

template < typename T >
class MutantStack
{
private:

                unsigned int            N;
                std::vector<int>        array;

public:

		MutantStack( int N );									//constructor
		MutantStack( MutantStack const & src);					//copy
		~MutantStack( void );									//destructor
		MutantStack & operator=( MutantStack const & rhs );		//overload operator =

};

#endif