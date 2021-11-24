#ifndef VEHICLE_H
#define VEHICLE_H
#include<iostream>
#include<list>
#include<string>

using namespace std;

class Vehicle{
    public:
        virtual void listarVerificacoes()=0;
        virtual void ajustar()=0;
        virtual void limpar()=0;
};

class Bicicleta: public Vehicle{
    private:
        list <string> verificacoes;
    public:
        Bicicleta();
        void listarVerificacoes();
        void ajustar();
        void limpar();
};

class Automovel: public Vehicle{
    private:
        int quilometragem;
        list <string> verificacoes;
    public:
        Automovel();
        void listarVerificacoes();
        void ajustar();
        void limpar();
        void mover(int quilometragem);
};

#endif