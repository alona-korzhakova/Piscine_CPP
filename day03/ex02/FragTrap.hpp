#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

/*
****************************** FRAGTRAP CLASS **********************************
*/

class FragTrap : public ClapTrap
{

	public:

		FragTrap(void);
		FragTrap(std::string const name);
		FragTrap(FragTrap const & fragTrap);
		~FragTrap(void);

		void			vaulthunter_dot_exe(std::string const & target);

		FragTrap &		operator=(FragTrap const &fragTrap);
};

#endif
