//
// Created by jules on 12/05/2024.
//

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain*	brain;

	public:
		Dog();
		Dog(const Dog& dog);
		~Dog();

		Dog&	operator=(const Dog& other);

		void	makeSound() const;
};


#endif //DOG_HPP
