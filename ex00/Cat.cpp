//
// Created by jules on 12/05/2024.
//

#include "Cat.hpp"

Cat::Cat() : Animal() {
	this -> type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& cat) : Animal(cat) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	Animal::operator=(other);
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Miaou miaou!" << std::endl;
}
