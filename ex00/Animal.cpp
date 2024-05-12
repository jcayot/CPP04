//
// Created by jules on 12/05/2024.
//

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& animal) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = animal;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal& animal) {
	this -> type = animal.type;
	return *this;
}

void Animal::makeSound() const {
	std::cout << "Some indistinguishable animal sound" << std::endl;
}

const std::string& Animal::getType() const {
	return (type);
}
