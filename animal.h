#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>

using namespace std;

class Animal{
    protected:
        string nome;
        string som;
    public:
        Animal();
        Animal(string nome);
        void printNome();
        Animal(string som);
        void emitirSom();
};

#endif // !1