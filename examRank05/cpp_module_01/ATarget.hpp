#ifndef ATarget_HPP
# define ATarget_HPP

# include "ASpell.hpp" 
# include <string>
# include <iostream>

class ASpell;

class ATarget
{
	protected:
		std::string type;

	public:
		ATarget(std::string type);
		~ATarget();
		ATarget(ATarget const & src);
		ATarget & operator=(ATarget const & rhs);
		ATarget();

		std::string const & getType() const;
		
		virtual ATarget * clone() const = 0;
		
		void getHitBySpell(ASpell const &spell) const;
};

#endif

