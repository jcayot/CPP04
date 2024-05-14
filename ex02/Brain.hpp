//
// Created by Jules Cayot on 13/05/2024.
//

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "iostream"

class Brain {
	private:
		std::string	ideas[100];

	public:
		Brain();
		Brain(const Brain& brain);
		~Brain();

		Brain&	operator=(const Brain& brain);
};


#endif //BRAIN_HPP
