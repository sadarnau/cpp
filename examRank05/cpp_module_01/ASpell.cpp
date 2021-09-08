#include "ASpell.hpp"

ASpell::ASpell() {}
ASpell::ASpell(std::string name, std::string effects) : name(name), effects(effects) {}
ASpell::~ASpell() {}
ASpell::ASpell(ASpell const & other) {*this = other;}
ASpell & ASpell::operator=(ASpell const & rhs)
{
	this->name = rhs.name;
	this->effects = rhs.effects;
	return *this;
}

std::string const & ASpell::getName() const {return this->name;}
std::string const & ASpell::getEffects() const {return this->effects;}

void ASpell::setEffects(std::string const & effects) {this->effects = effects;}

void ASpell::launch(ATarget const &target) const
{
	target.getHitBySpell(*this);
}
