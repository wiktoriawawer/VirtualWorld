#pragma once
#include "World.h"
class Organism
{
protected:
    World* currentWorld;        //referencja do œwiata w którym znajduje siê organizm
    int strength;               //sila                
    int initiative;             //inicjatywa          
    int x, y;                   //polozenie
    int age;                    //wiek organizmu
public:
    int getStrength();
    int getInitiative();
    int getAge();
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();

    Organism(World* currentWorld, int strength, int initiative, int x, int y, int age);

    virtual void draw() = 0;
    virtual void action() = 0;
    virtual void colision() = 0;
        
};

