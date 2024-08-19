//
// Created by jules on 16/05/2024.
//

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice();
		Ice(const Ice& ice);
		~Ice();

		Ice& operator=(const Ice& ice);

		Ice*	clone() const;
		void	use(ICharacter& target);
};


#endif //ICE_HPP
