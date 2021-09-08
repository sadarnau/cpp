#include "SpellBook.hpp"

SpellBook::~SpellBook() {}
SpellBook::SpellBook() {}

void SpellBook::learnSpell(ASpell *spell)
{
	this->spells.push_back(spell);
}

void SpellBook::forgetSpell(std::string const  & spellName)
{
	for (std::vector<ASpell *>::iterator it = this->spells.begin(); it != this->spells.end(); it++)
		if (spellName == (*it)->getName())
		{
			this->spells.erase(it);
			break;
		}
}

ASpell * SpellBook::createSpell(std::string const & spellName)
{
	
	for (std::vector<ASpell *>::iterator it = this->spells.begin(); it != this->spells.end(); it++)
		if (spellName == (*it)->getName())
			return *it;
	
	return NULL;
}
