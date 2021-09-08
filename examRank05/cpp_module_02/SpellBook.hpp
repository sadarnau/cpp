#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <string>
# include <iostream>
# include <vector>
# include "ATarget.hpp"
# include "ASpell.hpp"

class SpellBook
{
	private:
		std::vector<ASpell *>  spells;

		SpellBook(SpellBook const & src);
		SpellBook & operator=(SpellBook const & rhs);
	public:
		SpellBook();
		~SpellBook();

		void setTitle(std::string const & title);
		void introduce() const;

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const & spellName);
		ASpell * createSpell(std::string const & spellName);
};

#endif

