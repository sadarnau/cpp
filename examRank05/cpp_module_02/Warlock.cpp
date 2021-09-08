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
	this->book.learnSpell( spell);
}

void Warlock::forgetSpell(std::string const spellName)
{
	this->book.forgetSpell( spellName );
}

void Warlock::launchSpell(std::string spellName, ATarget & target)
{
	ASpell *tmp;
	if ((tmp = this->book.createSpell(spellName)))
		tmp->launch(target);
}
