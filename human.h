#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>
#include <string.h>

class Human {
private:
    char name[20];
    int age;
public:
    Human();
    Human(char n[], int a);
    void print();
};

#endif // Human_H
