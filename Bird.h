#pragma once

#include <Animal.h>
#include<cstring>
#include<iostream>

class Bird : public Animal
{
    public:
        Bird(char* birdName, unsigned int birdYears);
        Bird();
        ~Bird();

        char* getBirdName() const;
        unsigned int getBirdYears() const;

        void setBirdName(char*);
        void setBirdYears(unsigned int);

        virtual void sayHello() const;
        virtual void sayAge() const;

    private:
        char* birdName;
        unsigned int birdYears;
};

