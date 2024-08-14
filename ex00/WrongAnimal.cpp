//
// Created by Jules Cayot on 13/05/2024.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrongAnimal) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = wrongAnimal;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

const std::string &WrongAnimal::getType() const {
	return (this -> type);
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal) {
	if (this != &animal)
		this -> type = animal.type;
	return (*this);
}

void WrongAnimal::makeSound() const {
	std::cout << "Some indistinguishable animal sound" << std::endl;
}
