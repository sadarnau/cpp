#ifndef ASpell_HPP
# define ASpell_HPP

# include <string>
# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
	protected:
		std::string name;
		std::string effects;

	public:
		ASpell(std::string name, std::string effects);
		~ASpell();
		ASpell(ASpell const & src);
		ASpell & operator=(ASpell const & rhs);
		ASpell();

		std::string const & getName() const;
		std::string const & getEffects() const;
	
		void setEffects(std::string const & effects);

		virtual ASpell * clone() const = 0;

		void launch( ATarget const &target) const;
};

#endif

