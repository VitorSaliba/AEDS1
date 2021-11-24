#ifndef ANIMAIS_H
#define ANIMAIS_H
#include<iostream>

using namespace std;

#include"animal.h"

class Vaca:public Animal{
    public:
        Vaca();
};

class Cachorro:public Animal{
    public:
        Cachorro();
};

#endif 