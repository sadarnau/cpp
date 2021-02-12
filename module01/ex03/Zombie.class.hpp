#ifndef ZOMBIE_CLASS_H
#define ZOMBIE_CLASS_H

# include <iostream>
# include <string>

class Zombie  
{
private:

	std::string	name;
	std::string	type;

public:

	Zombie(void);
	Zombie(std::string name, std::string type);
	~Zombie();

	void	advert();

};

#endif