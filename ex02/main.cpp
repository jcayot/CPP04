//
// Created by jules on 12/05/2024.
//

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main() {
	Animal*	animals[10];

	for (int i = 0; i < 5; i++)
		animals[i] = new Cat();

	for (int i = 5; i < 10; i++)
		animals[i] = new Dog();

	for (int i = 0; i < 10; i++)
		delete animals[i];

	Cat cat;

	Cat catCopy(cat);

	catCopy.makeSound();
	return (0);
}
