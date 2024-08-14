//
// Created by jules on 12/05/2024.
//

#include "Cat.hpp"

Cat::Cat() : Animal() {
	this -> type = "Cat";
	this -> brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& cat) : Cat() {
	*this = cat;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
	delete this -> brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other) {
	if (this != &other) {
		Animal::operator=(other);
		*(this -> brain) = *(other.brain);
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Miaou miaou!" << std::endl;
}
