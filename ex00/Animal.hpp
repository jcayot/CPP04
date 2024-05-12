//
// Created by jules on 12/05/2024.
//

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
	protected:
		std::string	type;

	public:
		Animal();
		Animal(const Animal& animal);
		~Animal();

		Animal&	operator=(const Animal& animal);

		virtual void	makeSound() = 0;
};

#endif //ANIMAL_HPP
