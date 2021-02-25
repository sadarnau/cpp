/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 11:13:00 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/25 18:57:04 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <iostream>

Squad::Squad( void ) : Marine_list(NULL), count(0)
{
	return ;
}

Squad::Squad( Squad const & src )
{
	t_SpaceMarine *	ptr;
	t_SpaceMarine *	ptr2;

	ptr = this->Marine_list;
	if (ptr)
	{
		while(ptr->next)
		{
			delete (ptr->Marine);
			ptr2 = ptr->next;
			delete (ptr);
			ptr = ptr2;
		}
		delete (ptr->Marine);
		delete (ptr);
	}
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
	t_SpaceMarine *	ptr2;
	int				i;	
	
	ptr = this->Marine_list;
	
	if (ptr)
	{
		while(ptr->next)
		{
			delete (ptr->Marine);
			ptr2 = ptr->next;
			delete (ptr);
			ptr = ptr2;
		}
		delete (ptr->Marine);
		delete (ptr);
	}

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
	t_SpaceMarine *ptr;

	if (N < 0 || N >= this->count)
		return NULL;

	ptr = this->Marine_list;
	for(int i = 0; i < N; i++)
		ptr = ptr->next;
	return (ptr->Marine);
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
