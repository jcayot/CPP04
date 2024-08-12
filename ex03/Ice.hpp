//
// Created by jules on 16/05/2024.
//

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(std::string const& type);
		Ice(Ice const& ice);
		~Ice();

		Ice* clone() const;

		void	use(ICharacter& target);
};


#endif //ICE_HPP
