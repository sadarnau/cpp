#include "Aweapon.hpp"

Aweapon::Aweapon( void )
{
	return ;
}

Aweapon::Aweapon( std::string name )
{
	return ;
}

Aweapon::Aweapon( Aweapon const & src )
{
	*this = src;
	return ;
}

Aweapon::~Aweapon( void )
{
	return ;
}

Aweapon & Aweapon::operator=( Aweapon const & rhs)
{
    // this->??? = rhs.???;
	return ( *this );
}
