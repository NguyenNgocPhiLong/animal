#include "FarmFunctions.h"
#include "Dog.h"
#include "Cat.h"
#include "Chicken.h"
#include "Pig.h"
#include <iostream>
using namespace std;

vector<Pet*> FarmFunctions::createPets(){
    Dog *dog = new Dog("Gold", 4, "yellow", 2);
    Cat *cat1 = new Cat("Bo", 20, "white", 1);
    Cat *cat2 = new Cat("Bi", 10, "black", 3);
    Chicken *chicken = new Chicken("Goloa", 2.7, "red", 3);
    Pig *pig = new Pig("Peppa", 50, "pink", 2);

    vector<Pet*> pets;
    pets.push_back(dog);
    pets.push_back(cat1);
    pets.push_back(cat2);
    pets.push_back(chicken);
    pets.push_back(pig);

    return pets;

}

void FarmFunctions::showAllPet(vector<Pet*> pets){
    for(auto pet : pets){
        pet->ShowMe();
    }
}