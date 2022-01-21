#ifndef PUDG_H
#define PUDG_H
#include "unit.h"

class pudg : public Unit{
public:
    pudg();
    void MeatHoock(Unit &enemy);
    void spell_1(Unit  &enemy);
};

#endif // PUDG_H
