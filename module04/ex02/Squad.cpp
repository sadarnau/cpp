/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:13:00 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/24 14:28:14 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad( void ) : Marine_list(NULL), count(0)
{
	return ;
}

Squad::Squad( Squad const & src )
{
	*this = src;
	return ;
}

Squad::~Squad( void )
{
	t_SpaceMarine *	ptr;
	t_SpaceMarine *	ptr2;

	ptr = this->Marine_list;

	while(ptr->next)
	{
		delete (ptr->Marine);
		ptr2 = ptr->next;
		delete (ptr);
		ptr = ptr2;
	}
	delete (ptr->Marine);
	delete (ptr);
	return ;
}

Squad & Squad::operator=( Squad const & rhs)
{
	t_SpaceMarine *	ptr;
	int				i;	
	
	ptr = this->Marine_list;

	i = 0;
	while (i < rhs.count)
	{
		rhs.Marine_list->Marine = ptr->Marine;
		rhs.Marine_list->next = ptr->next;
	}

	this->count = rhs.count;

	return ( *this );
}

int				Squad::getCount( void ) const
{
	return (this->count);
}

ISpaceMarine *	Squad::getUnit( int N ) const
{
	ISpaceMarine *ptr;

	if (N < 0 || N >= this->count)
		return 0;

	ptr = this->Marine_list[0].Marine;
	for(int i = 0; i < N; i++)
		ptr = this->Marine_list[i].next->Marine;
	return(ptr);
}

int				Squad::push( ISpaceMarine * SpaceMarine )
{
	t_SpaceMarine *	ptr;
	t_SpaceMarine *	newMarineList;
	
	ptr = this->Marine_list;
	
	if (SpaceMarine == NULL)
		return 0;

	while (ptr && ptr->next)
	{
		if (ptr->Marine == SpaceMarine)
			return 0;
		ptr = ptr->next;
	}
	newMarineList = new t_SpaceMarine();
	newMarineList->Marine = SpaceMarine;
	newMarineList->next = NULL;

	if (!ptr)
		this->Marine_list = newMarineList;
	else
		ptr->next = newMarineList;

	this->count++;
	return (this->count);
}
