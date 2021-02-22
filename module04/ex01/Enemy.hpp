#ifndef ENEMY_H
#define ENEMY_H

class Enemy
{
private:


public:

	Enemy( void );									//default constructor
	Enemy( std::string name );					//constructor
	Enemy( Enemy const & src);  				//copy
	~Enemy( void );								//destructor
	Enemy & operator=( Enemy const & rhs);      //overload operators
};

#endif
