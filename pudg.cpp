#include "pudg.h"


pudg::pudg()
{
    this->health = 120;
    this->armor = 1000;
    this->damage = 1;
    strcpy(this->name , "Pudge");
}

void pudg::MeatHoock(Unit &enemy){
    int uron = this->damage * 1.8;
    enemy.health -= uron;
    cout << this->name << "hukaet " << enemy.name << " i nanosit " << uron << " urona " << endl;
}
