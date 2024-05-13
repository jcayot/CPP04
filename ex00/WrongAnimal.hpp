//
// Created by Jules Cayot on 13/05/2024.
//

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "iostream"

class WrongAnimal {
protected:
	std::string	type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& wrongAnimal);
	~WrongAnimal();

	const std::string&	getType() const;

	WrongAnimal&	operator=(const WrongAnimal& animal);

	void	makeSound() const;
};


#endif //WRONGANIMAL_HPP
