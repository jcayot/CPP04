//
// Created by jules on 12/05/2024.
//

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat();
		Cat(const Cat& cat);
		~Cat();

		Cat&	operator=(const Cat& other);

		void	makeSound() const;
};


#endif //CAT_HPP
