//
// Created by jules on 16/05/2024.
//

#include "AMateria.hpp"

AMateria::AMateria() {
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(const std::string& type) {
	std::cout << "AMateria constructor called" << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria& aMateria) {
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = aMateria;
}

AMateria::~AMateria() {
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& aMateria) {
	if (this != &aMateria)
		this->type = aMateria.type;
	return (*this);
}

std::string const& AMateria::getType() const {
	return (type);
}
