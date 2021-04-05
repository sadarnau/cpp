/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 16:54:40 by sadarnau          #+#    #+#             */
/*   Updated: 2021/04/05 15:29:01 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <string>
# include <iostream>
# include <vector>
# include <stack>

template < typename T >
class MutantStack : public std::stack<T>
{
private:

public:

		MutantStack( void );									//constructor
		MutantStack( MutantStack const & src);					//copy
		~MutantStack( void );									//destructor
		MutantStack & operator=( MutantStack const & rhs );		//overload operator =

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(void);
		iterator end(void);

		// T & const			top( void );
		// bool const			empty( void );
		// unsigned int const	size( void );
		// void				push( T & const value );
		// void				pop( void );
		// void				swap( void );
};

#endif