#include "ZombieEvent.class.hpp"  
	
ZombieEvent::ZombieEvent()
{
	this->type = "beautiful";
}
	
ZombieEvent::~ZombieEvent()
{
	
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
	return ;
}

Zombie	*ZombieEvent::randomChump()
{
	std::string	name[5] = {"Franck", "Lyly", "Hunter", "Miles", "Francis"};
	srand (time(NULL));
	return (new Zombie(name[rand() % 5], this->type));
}

Zombie	*ZombieEvent::newZombie (std::string name)
{
	return (new Zombie(name, this->type));
}
