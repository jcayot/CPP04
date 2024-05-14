//
// Created by jules on 12/05/2024.
//

#include "Dog.hpp"

Dog::Dog() : Animal() {
	this -> type = "Dog";
	this -> brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& dog) : Animal(dog) {
	this -> brain = new Brain();
	this -> brain = dog.brain;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
	delete this -> brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other) {
	Animal::operator=(other);
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Woof woof!" << std::endl;
}
