//
// Created by jules on 16/05/2024.
//

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "AMateria.hpp"

class Character : public ICharacter {
	private:
		std::string	name;
		AMateria*	materials[4];
		AMateria**	formerMaterials;
		int 		formerIndex;

	public:
		Character();
		Character(const std::string& name);
		Character(const Character& character);
		~Character() override;

		Character& operator=(const Character& character);

		const std::string& getName() const override;

		void equip(AMateria* m) override;
		void unequip(int idx) override;
		void use(int idx, ICharacter& target) override;

	private:
		void	addFormer(AMateria *m);
		void	deleteFormer(AMateria *m);
};


#endif //CPP04_CHARACTER_HPP
