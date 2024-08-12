//
// Created by jules on 16/05/2024.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource default constructor called" << std::endl;
	this -> materialsIndex = 0;
}

MateriaSource::MateriaSource(const MateriaSource& materiaSource) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = materiaSource;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called" << std::endl;
	freeMateriaSource();
}

MateriaSource& MateriaSource::operator=(const MateriaSource& materiaSource) {
	freeMateriaSource();
	this -> materialsIndex = materiaSource.materialsIndex;
	for (int i = 0; i < materiaSource.materialsIndex; i++)
		this->materials[i] = materiaSource.materials[i]->clone();
	return (*this);
}

void MateriaSource::learnMateria(AMateria* materia) {
	if (this->materialsIndex < 4) {
		this->materials[this->materialsIndex] = materia->clone();
		this->materialsIndex++;
	}
}

AMateria* MateriaSource::createMateria(const std::string& type) {
	for (int i = 0; i < materialsIndex; i++) {
		if (materials[materialsIndex]->getType() == type)
			return materials[i]->clone();
	}
	return (nullptr);
}

void MateriaSource::freeMateriaSource() {
	for (int i = 0; i < materialsIndex; i++)
		delete materials[i];
}
