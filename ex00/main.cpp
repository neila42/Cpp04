#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int	main(void)
{
	std::cout << "Correct animals." << std::endl;
	const Animal*	meta = new Animal();
	const Animal*	i = new Cat();
	const Animal*	j = new Dog();

	std::cout << std::endl;
	std::cout << "Type: " << j->getType() << " sound: "; 
	j->makeSound();
	std::cout << "Type: " << i->getType() << " sound: ";
	i->makeSound();
	std::cout << "Type: " << meta->getType() << " sound: ";
	meta->makeSound();
	std::cout << std::endl;
	delete(meta);
	delete(i);
	delete(j);

	std::cout << "Wrong animals" << std::endl;
	const WrongAnimal*	metaW = new WrongAnimal();
	const WrongAnimal*	iw = new WrongCat();
	const WrongAnimal*	jw = new WrongDog();

	std::cout << std::endl;
	std::cout << "Type: " << jw->getType() << " sound: "; 
	jw->makeSound();
	std::cout << "Type: " << iw->getType() << " sound: ";
	iw->makeSound();
	std::cout << "Type: " << metaW->getType() << " sound: ";
	metaW->makeSound();
	std::cout << std::endl;
	delete(metaW);
	return (0);
}
