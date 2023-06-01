#include <iostream>
#ifndef buoi8_Pig_h
#define buoi8_Pig_h
using namespace std;

class Pet {
   private:
    int Id;
    string Name;
    float Weight;
    string Color;
    int Age;  
      
   public:
        Pet(){}
        Pet(int id, string name, float weight, string color, int age){

            this->Name = name;
            this->Weight = weight;
            this->Color = color;
            this->Age = age;
        }
        virtual bool Eat(string food) = 0;
        void ShowMe(){
            cout << "Pet name: " << Name << ", Weight:" << Weight
                 << ", Color:" << Color << ", Age:" << Age << endl;
        }
        float setWeight(float weight){
            this->Weight += weight;
        }
        void getWeight(){
            return this->Weight;
        }
};
#endif