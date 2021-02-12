/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:34:42 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/12 15:56:52 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_H
#define HUMAN_CLASS_H

# include "Brain.class.hpp"

class Human
{
private:

	Brain const _MyBrain;

public:

	Human();
	~Human();

	const Brain	&getBrain() const ;
	std::string	identify() const ;
};

#endif
