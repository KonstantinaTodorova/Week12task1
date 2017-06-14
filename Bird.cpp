#include "Bird.h"


Bird::Bird(char* birdName, unsigned int birdYears)
{
    setBirdName(birdName);
    setBirdYears(birdYears);
}

Bird::Bird()
{
    birdName = NULL;
}

Bird::~Bird()
{
    delete[] birdName;
}

char* Bird::getBirdName() const
{
    return birdName;
}

unsigned int Bird::getBirdYears() const
{
    return birdYears;
}

void Bird::setBirdName(char* birdName)
{
    delete[] this-> birdName;
    this->birdName = new char[strlen(birdName)  + 1];
    strcpy(this->birdName, birdName);
}

void Bird::setBirdYears(unsigned int)
{
    this->birdYears = birdYears;
}

void Bird::sayHello() const
{
    std::cout << " Tweet! My name is " << getBirdName() << " ! " << std::endl;
}

void Bird::sayAge() const
{
    std::cout << " The bird's age is " << getBirdYears() << " . " << std::endl;
}

