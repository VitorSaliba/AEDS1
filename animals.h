#ifndef ANIMALS_H
#define ANIMALS_H
#include<iostream>

using namespace std;

class Animal{
    protected:
        string fala;
        string nome;
    public:
        Animal();
        Animal(string fala);
        Animal(string nome);
        void printNome();
        void printFala();
};

class Homem:public Animal{
    public:
        Homem();
        Homem(string nome);
        Homem(string fala);
        void printNome();
        void printFala();
};

class Cachorro:public Animal{
    public:
        Cachorro();
        Cachorro(string nome);
        Cachorro(string fala);
        void printNome();
        void printFala();
};

class Gato:public Animal{
    public:
        Gato();
        Gato(string nome);
        Gato(string fala);
        void printNome();
        void printFala();
};

#endif