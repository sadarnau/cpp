#include "SuperMutant.hpp"

SuperMutant::SuperMutant( void )
{
	return ;
}

SuperMutant::SuperMutant( std::string name )
{
	return ;
}

SuperMutant::SuperMutant( SuperMutant const & src )
{
	*this = src;
	return ;
}

SuperMutant::~SuperMutant( void )
{
	return ;
}

SuperMutant & SuperMutant::operator=( SuperMutant const & rhs)
{
    this->??? = rhs.???;
	return ( *this );
}
