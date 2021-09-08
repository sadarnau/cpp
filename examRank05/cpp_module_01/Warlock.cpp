#include "Warlock.hpp"


Warlock::Warlock(std::string name, std::string title) : name(name), title(title)
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}


std::string const & Warlock::getName() const {return this->name;}
std::string const & Warlock::getTitle() const {return this->title;}

void Warlock::setTitle(std::string const & title) {this->title = title;}

void Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << " !" << std::endl;
}

void Warlock::learnSpell(ASpell *spell)
{
	this->spells.push_back(spell);
}

void Warlock::forgetSpell(std::string const spellName)
{
	for (std::vector<ASpell *>::iterator it = this->spells.begin(); it != this->spells.end(); it++)
		if (spellName == (*it)->getName())
		{
			this->spells.erase(it);
			break;
		}
}

void Warlock::launchSpell(std::string spellName, ATarget & target)
{
	
	for (std::vector<ASpell *>::iterator it = this->spells.begin(); it != this->spells.end(); it++)
		if (spellName == (*it)->getName())
		{
			(*it)->launch(target);
			break;
		}
}
