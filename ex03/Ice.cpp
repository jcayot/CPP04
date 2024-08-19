//
// Created by jules on 16/05/2024.
//

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& ice) : AMateria(ice){
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice& ice) {
	AMateria::operator=(ice);
	return (*this);
}

Ice* Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
