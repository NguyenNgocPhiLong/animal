#include "FarmFunctions.h"
int main()
{
    FarmFunctions farm;
    vector<Pet*> pets;
    vector<string> foods = {"xuong", "ca", "thoc", "rau"};
    pets = farm.createPets();
    farm.showAllPet(pets);

    return 0;
}