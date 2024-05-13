//
// Created by jules on 12/05/2024.
//

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	const WrongAnimal wrong = WrongAnimal();
	const WrongCat wrongCat = WrongCat();
	wrong.makeSound();
	wrongCat.makeSound();
	return (0);
}
