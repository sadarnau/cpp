#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <iostream>
# include <vector>
# include "ATarget.hpp"
# include "ASpell.hpp"

class Warlock
{
	private:
		std::string name;
		std::string title;
		std::vector<ASpell *>  spells;

		Warlock(Warlock const & src);
		Warlock & operator=(Warlock const & rhs);
		Warlock();
	public:
		Warlock(std::string name, std::string title);
		~Warlock();

		std::string const & getName() const;
		std::string const & getTitle() const;
		
		void setTitle(std::string const & title);
		void introduce() const;

		void learnSpell(ASpell *spell);
		void forgetSpell(std::string const spellName);
		void launchSpell(std::string spellName, ATarget & target);
};

#endif

