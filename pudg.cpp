#include "pudg.h"


pudg::pudg()
{
    this->health = 120;
    this->armor = 1000;
    this->damage = 10;
    strcpy(this->name , " Pudge ");
}

void pudg::MeatHoock(Unit &enemy){
    int uron = this->damage * 1.8;
    this->health -= uron;
    cout << this->name << "hukaet " << enemy.name << " i nanosit " << uron << " urona " << endl;
}

void pudg::spell_1(Unit &enemy){
    this->MeatHoock(enemy);
}
