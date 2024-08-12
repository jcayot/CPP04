//
// Created by jules on 16/05/2024.
//

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
	private:
		AMateria*	materials[4];
		int 		materialsIndex;

	public:
		MateriaSource();
		MateriaSource(const MateriaSource& materiaSource);
		~MateriaSource() override;

		MateriaSource&	operator=(const MateriaSource& materiaSource);

		void		learnMateria(AMateria* materia) override;
		AMateria*	createMateria(const std::string& type) override;

	private:
		void	freeMateriaSource();
};


#endif //MATERIASOURCE_HPP
