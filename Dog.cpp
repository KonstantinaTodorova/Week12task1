#include "Dog.h"

Dog::Dog(char* dogName, unsigned int dogYears)
{
    setDogName(dogName);
    setDogYears(dogYears);
}

Dog::Dog()
{
    dogName = NULL;
}

Dog::~Dog()
{
    delete[] dogName;
}

char* Dog::getDogName() const
{
    return dogName;
}

unsigned int Dog::getDogYears() const
{
    return dogYears;
}

void Dog::setDogName(char* dogName)
{
    delete[] this->dogName;
    this->dogName = new char[strlen(dogName)  + 1];
    strcpy(this->dogName, dogName);
}

void Dog::setDogYears(unsigned int)
{
    this->dogYears = dogYears;
}

void Dog::sayHello() const
{
    std::cout << " Woof! My name is " << getDogName() << " ! " << std::endl;
}

void Dog::sayAge() const
{
    std::cout << " The dog's age is " << getDogYears() << " . " << std::endl;
}

