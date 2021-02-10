#include "Zombie.class.hpp"  
	
Zombie::Zombie()
{
	
}
	
Zombie::~Zombie()
{
	
}

void	Zombie::advert()
{
	std::cout << "<" << this->name << "(" << this->type << ")>" << " Braiiiiiiinnnssss ..." << std::endl;
}