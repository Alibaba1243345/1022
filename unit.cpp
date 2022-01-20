#include "unit.h"

Unit::Unit()
{
    this->health = 100;
    this->armor = 10;
    this->damage = 20;
    strcpy(this->name , "Unit1");
}

void Unit::attack(Unit &enemy) {

    enemy.health -= this->damage;
    cout << this->name << " atakuet " << enemy.name<< " i nanosit " << this->damage << " damage " <<endl;
}
