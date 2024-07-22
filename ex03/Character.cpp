//
// Created by jules on 16/05/2024.
//

#include "Character.hpp"

Character::Character() {
	std::cout << "Character default constructor called" << std::endl;
	formerIndex = 0;
	formerMaterials = nullptr;
	for (int i = 0; i < 4; ++i)
		materials[i] = nullptr;
}

Character::Character(const std::string& name) : Character() {
	std::cout << "Character constructor called" << std::endl;
	this->name = name;
}

Character::Character(const Character& character) {
	std::cout << "Character copy constructor called" << std::endl;
	*this = character;
}

Character::~Character() {
	std::cout << "Character destructor constructor called" << std::endl;
	for (int i = 0; i < 4; ++i) {
		if (materials[i] != nullptr)
			delete materials[i];
	}
	for (int i = 0; i < formerIndex; ++i) {
		if (materials[i] != nullptr)
			delete formerMaterials[formerIndex];
	}
}

Character& Character::operator=(const Character& character) {
	for (int i = 0; i < 4; i++)
		this->materials[i] = character.materials[i];
	return (*this);
}

const std::string& Character::getName() const {
	return (this->name);
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (this->materials[i] == nullptr) {
			this->materials[i] = m;
			deleteFormer(m);
			break;
		}
	}
}

void Character::unequip(int idx) {
	if (materials[idx] != nullptr) {
		addFormer(materials[idx]);
		materials[idx] = nullptr;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (materials[idx] != nullptr) {
		if (materials[idx]->getType() == "ice")
			std::cout << "* shoots an ice bolt at " + target.getName() + " *";
		else if (materials[idx]->getType() == "cure")
			std::cout << "* heals " + target.getName() + "’s wounds *";
	}
}

void Character::addFormer(AMateria* m) {
	if (formerIndex % 8 == 0) {
		AMateria **newFormer = new AMateria*[formerIndex + 8];
		for (int i = 0; i < formerIndex; ++i)
			newFormer[i] = formerMaterials[i];
		delete formerMaterials;
		formerMaterials = newFormer;
	}
	formerMaterials[formerIndex++] = m;
}

void Character::deleteFormer(AMateria* m) {
	for (int i = 0; i < formerIndex; ++i) {
		if (formerMaterials[i] == m) {
			formerMaterials[i] = nullptr;
			break ;
		}
	}
}
