#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <string>
# include <iostream>
# include <vector>
# include "ATarget.hpp"
# include "ASpell.hpp"
# include "SpellBook.hpp"

class TargetGenerator
{
	private:
        std::vector<ATarget *>  targets;
		
		TargetGenerator(TargetGenerator const & src);
		TargetGenerator & operator=(TargetGenerator const & rhs);
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget * target);
		void forgetTargetType(std::string const targettype);
		ATarget * createTarget(std::string targettype);
};

#endif

