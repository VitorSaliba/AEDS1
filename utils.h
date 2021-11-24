#ifndef UTILS_H
#define UTILS_H
#include<iostream>

using namespace std;

class Utils{
    protected:
        float celsius;
        float fahrenheit;

    public:
        Utils();
        Utils(float celsius);
        Utils(float fahrenheit);
        virtual void imprimeResultado();
};

#endif