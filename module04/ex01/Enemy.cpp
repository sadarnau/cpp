#include "Enemy.hpp"

Enemy::Enemy( void )
{
	return ;
}

Enemy::Enemy( std::string name )
{
	return ;
}

Enemy::Enemy( Enemy const & src )
{
	*this = src;
	return ;
}

Enemy::~Enemy( void )
{
	return ;
}

Enemy & Enemy::operator=( Enemy const & rhs)
{
    this->??? = rhs.???;
	return ( *this );
}
