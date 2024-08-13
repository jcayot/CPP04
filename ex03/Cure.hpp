//
// Created by jules on 16/05/2024.
//

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
	public:
		Cure();
		Cure(const Cure& cure);
		~Cure();

		Cure* clone() const;

		void use(ICharacter& target);
};


#endif //CURE_HPP
