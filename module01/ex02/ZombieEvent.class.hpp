#ifndef ZOMBIEEVENT_CLASS_H
#define ZOMBIEEVENT_CLASS_H
	
# include <iostream>
# include <string>
# include "Zombie.class.hpp"

class ZombieEvent 
{
private:

public:

	ZombieEvent();
	~ZombieEvent();

	void	setZombieType();
	Zombie	*newZombie (std::string name);
	void	randomChump();
};

#endif