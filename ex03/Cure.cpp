//
// Created by jules on 16/05/2024.
//

#include "Cure.hpp"

Cure::Cure() : AMateria("cure"){
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure& cure) : AMateria(cure){
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& cure) {
	AMateria::operator=(cure);
	return (*this);
}

Cure* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
