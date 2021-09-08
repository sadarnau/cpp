#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <string>
# include <iostream>

class Warlock
{
	private:
		std::string name;
		std::string title;

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
};

#endif

