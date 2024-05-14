//
// Created by Jules Cayot on 13/05/2024.
//

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(const WrongCat& wrongCat);
		~WrongCat();

		WrongCat&	operator=(const WrongCat& other);
};


#endif //WRONGCAT_HPP
