#ifndef CHARACTER_H
#define CHARACTER_H

class Character
{
private:


public:

	Character( void );									//default constructor
	Character( std::string name );					//constructor
	Character( Character const & src);  				//copy
	~Character( void );								//destructor
	Character & operator=( Character const & rhs);      //overload operators
};

#endif
