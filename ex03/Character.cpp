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
	std::cout << "Character destructor called" << std::endl;
	freeCharacter();
}

Character& Character::operator=(const Character& character) {
	if (this != &character) {
		freeCharacter();
		this -> name = character.name;
		for (int i = 0; i < 4; i++) {
			if (character.materials[i] != nullptr)
				this->materials[i] = character.materials[i]->clone();
		}
		this -> formerMaterials = nullptr;
		this -> formerIndex = 0;
	}
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
	if (idx >= 0 && idx < 4) {
		if (materials[idx] != nullptr) {
			addFormer(materials[idx]);
			materials[idx] = nullptr;
		}
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4) {
		if (materials[idx] != nullptr)
			materials[idx]->use(target);
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

void Character::freeCharacter() {
	for (int i = 0; i < 4; ++i) {
		if (materials[i] != nullptr)
			delete materials[i];
	}
	for (int i = 0; i < formerIndex; ++i) {
		if (formerMaterials[i] != nullptr)
			delete formerMaterials[formerIndex];
	}
	if (formerMaterials != nullptr)
		delete formerMaterials;
}
