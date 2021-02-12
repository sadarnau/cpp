#ifndef ZOMBIEEVENT_CLASS_H
#define ZOMBIEEVENT_CLASS_H
	
# include <iostream>
# include <string>
# include "Zombie.class.hpp"

class ZombieEvent 
{
private:

	std::string	type;

public:

	ZombieEvent();
	~ZombieEvent();

	void	setZombieType(std::string type);
	Zombie	*newZombie (std::string name);
	Zombie	*randomChump();
};

#endif