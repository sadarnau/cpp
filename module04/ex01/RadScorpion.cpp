#include "RadScorpion.hpp"

RadScorpion::RadScorpion( void )
{
	return ;
}

RadScorpion::RadScorpion( std::string name )
{
	return ;
}

RadScorpion::RadScorpion( RadScorpion const & src )
{
	*this = src;
	return ;
}

RadScorpion::~RadScorpion( void )
{
	return ;
}

RadScorpion & RadScorpion::operator=( RadScorpion const & rhs)
{
    this->??? = rhs.???;
	return ( *this );
}
