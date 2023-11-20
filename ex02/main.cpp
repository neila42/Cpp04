#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#define ELEMENTS 4

int main(void)
{
    // AAnimal* meta = new AAnimal(); 
    // impossible AAnimal directement 

    AAnimal* animals[ELEMENTS];
    int i = 0;

    while (i < ELEMENTS / 2)
    {
        animals[i] = new Cat();
        i++;
    }
    std::cout << std::endl;
    while (i < ELEMENTS)
    {
        animals[i] = new Dog();
        i++;
    }
    std::cout << std::endl;
    i = 0;
    while (i < ELEMENTS)
    {
        std::cout << "Type: " << animals[i]->getType() << ", sound: ";
        animals[i]->makeSound();
        i++;
    }
    std::cout << std::endl;
    i = 0;
    while (i < ELEMENTS)
    {
        delete animals[i];
        i++;
    }
    return 0;
}

// int	main(void)
// {
// 	const AAnimal*	i = new Cat();
// 	const AAnimal*	j = new Dog();
// 	// const Animal*	meta = new Animal();

// 	std::cout << std::endl;
// 	std::cout << "Type: " << j->getType() << " sound: "; 
// 	j->makeSound();
// 	std::cout << "Type: " << i->getType() << " sound: ";
// 	i->makeSound();
// 	std::cout << std::endl;
// 	delete(i);
// 	delete(j);

// 	return (0);
// }
