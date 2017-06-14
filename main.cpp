#include <iostream>
#include "Dog.h"
#include "Bird.h"
#include "Animal.h"

using namespace std;

int main()
{
    Dog one;
    one.setDogName("Pesho");

    cout << "The dog is saying : " << endl;
    one.sayHello();

    Bird two;
    two.setBirdName("Melly");
    cout << "The bird is saying : " << endl;
    two.sayHello();

    return 0;
}
