//
// Created by jules on 16/05/2024.
//

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class AMateria {
	protected:
		std::string	type;

	public:
		AMateria(std::string const& type);

		std::string const& getType() const;
		virtual AMateria* clone() const = 0;

		virtual void use(ICharacter& target);
};


#endif //AMATERIA_HPP
