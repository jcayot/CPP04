//
// Created by Jules Cayot on 13/05/2024.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this -> type = "WrongCat";
	std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wrongCat) : WrongAnimal(wrongCat) {
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
	WrongAnimal::operator=(other);
	return (*this);
}
