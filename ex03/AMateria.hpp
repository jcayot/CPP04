//
// Created by jules on 16/05/2024.
//

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria {
	protected:
		std::string	type;

	public:
		AMateria();
		AMateria(std::string const& type);
		AMateria(const AMateria& aMateria);
		virtual ~AMateria();

		AMateria& operator=(const AMateria& aMateria);

		std::string const& getType() const;

		virtual void use(ICharacter& target) = 0;
		virtual AMateria* clone() const = 0;
};


#endif //AMATERIA_HPP
