#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#define ELEMENTS 4

int main(void)
{
    Animal* animals[ELEMENTS];
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
