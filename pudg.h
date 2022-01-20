#ifndef PUDG_H
#define PUDG_H
#include "unit.h"

class pudg : public Unit{
public:
    pudg();
    void MeatHoock(Unit &enemy);
};

#endif // PUDG_H
