#ifndef VEICULO_H
#define VEICULO_H
#include<iostream>

using namespace std;

class Veiculo{
    protected:
        float peso;
        int velMaxima;
        float preco;
    
    public:
        Veiculo();
        Veiculo(float peso);
        void setPeso(float peso);
        float getPeso();
        virtual void imprimePeso();
        Veiculo(int velMaxima);
        void setVel(int velMaxima);
        int getVel();
        virtual void imprimeVel();
        Veiculo(float preco);
        void setPreco(float preco);
        float getPreco();
        virtual void imprimePreco();
};

class Motor{
    protected:
        int cilindros;
        int potencia;
    
    public:
        Motor();
        Motor(int cilindros);
        void setCilindros(int cilindros);
        int getCilindros();
        virtual void imprimeCilindros();
        Motor(int potencia);
        void setPotencia(int potencia);
        int getPotencia();
        virtual void imprimePotencia();
};

class Caminhao:public Veiculo, public Motor{
    protected:
        float alturaMaxima;
        float comprimento;

    public:
        Caminhao();
        Caminhao(float peso);
        void setPeso(float peso);
        int getPeso();
        virtual void imprimePeso();
        Caminhao(float alturaMaxima);
        void setAltura(float alturaMaxima);
        float getAltura();
        virtual void imprimeAltura();
        Caminhao(float comprimento);
        void setComprimento(float comprimento);
        float getComprimento();
        virtual void imprimeComprimento();
};

#endif