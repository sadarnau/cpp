/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 12:36:18 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/26 13:00:24 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat
{
private:

	std::string const	name;
	int					grade;

public:

	Bureaucrat( void );										//default constructor
	Bureaucrat( std::string name );							//constructor
	Bureaucrat( Bureaucrat const & src);  					//copy
	~Bureaucrat( void );									//destructor
	Bureaucrat & operator=( Bureaucrat const & rhs );		//overload operators

	std::string	getName( void ) const;
	int			getGrade( void ) const;
};

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
