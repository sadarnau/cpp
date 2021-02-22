#include "Character.hpp"

Character::Character( void )
{
	return ;
}

Character::Character( std::string name )
{
	return ;
}

Character::Character( Character const & src )
{
	*this = src;
	return ;
}

Character::~Character( void )
{
	return ;
}

Character & Character::operator=( Character const & rhs)
{
    this->??? = rhs.???;
	return ( *this );
}
