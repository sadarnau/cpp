#include "ATarget.hpp"

ATarget::ATarget() {}
ATarget::ATarget(std::string type) : type(type) {}
ATarget::~ATarget() {}
ATarget::ATarget(ATarget const & other) {*this = other;}
ATarget & ATarget::operator=(ATarget const & rhs)
{
	this->type = rhs.type;
	return *this;
}

std::string const & ATarget::getType() const {return this->type;}

void ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << "!\n";
}
