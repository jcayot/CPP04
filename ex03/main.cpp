//
// Created by jules on 16/05/2024.
//

#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"


int main( void ) {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	*bob = *me;
	bob->use(0, *me);
	delete bob;
	delete me;

	// IMateriaSource* src2 = new MateriaSource();
	// src2->learnMateria(new Ice());
	// src2->learnMateria(new Ice());
	// src2->learnMateria(new Ice());
	// src2->learnMateria(new Ice());
	// src2->learnMateria(new Ice());
	// *src = *src2;
	delete src;
	// delete src2;
	return 0;
}
