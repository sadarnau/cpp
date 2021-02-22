#ifndef RADSCORPION_H
#define RADSCORPION_H

class RadScorpion
{
private:


public:

	RadScorpion( void );									//default constructor
	RadScorpion( std::string name );					//constructor
	RadScorpion( RadScorpion const & src);  				//copy
	~RadScorpion( void );								//destructor
	RadScorpion & operator=( RadScorpion const & rhs);      //overload operators
};

#endif
