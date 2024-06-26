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
		virtual ~Animal();

		const std::string&	getType() const;

		Animal&	operator=(const Animal& animal);

		virtual void	makeSound() const;
};

#endif //ANIMAL_HPP
