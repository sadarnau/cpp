#ifndef SUPERMUTANT_H
#define SUPERMUTANT_H

class SuperMutant
{
private:


public:

	SuperMutant( void );									//default constructor
	SuperMutant( std::string name );					//constructor
	SuperMutant( SuperMutant const & src);  				//copy
	~SuperMutant( void );								//destructor
	SuperMutant & operator=( SuperMutant const & rhs);      //overload operators
};

#endif
