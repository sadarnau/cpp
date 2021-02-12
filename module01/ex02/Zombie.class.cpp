#include "Zombie.class.hpp"  
	
Zombie::Zombie(std::string name, std::string type) : name(name), type(type)
{
	return ;
}
	
Zombie::~Zombie()
{
	
}

void	Zombie::advert()
{
	std::cout << "<" << this->name << "(" << this->type << ")>" << " Braiiiiiiinnnssss ..." << std::endl;
}
