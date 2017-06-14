#pragma once

#include <Animal.h>
#include<cstring>
#include<iostream>

class Dog : public Animal
{
    public:
        Dog(char* dogName, unsigned int dogYears);
        Dog();
        ~Dog();

        char* getDogName() const;
        unsigned int getDogYears() const;

        void setDogName(char*);
        void setDogYears(unsigned int);

        virtual void sayHello() const;
        virtual void sayAge() const;

    private:
        char* dogName;
        unsigned int dogYears;
};

