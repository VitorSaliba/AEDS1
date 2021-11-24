#include <iostream>
#include "vehicle.h"
#include <list>
#include <iterator>
#include<ctime>
#include<iomanip>

using namespace std;

string getDate()
{

    auto t = time(nullptr);

    auto tm = *localtime(&t);

    ostringstream oss;

    oss<<put_time(&tm, "%d-%m-%Y %H-%M-%S");

    return oss.str();
}

Bicicleta::Bicicleta()
{
    this->verificacoes.clear();
}

void Bicicleta::listarVerificacoes(){
    list <string> :: iterator t = verificacoes.begin();
    for(t = verificacoes.begin(); t != verificacoes.end(); ++t){
        cout<<*t<<endl;
    }
}
void Bicicleta::ajustar()
{
    string verificacao = "Ajuste + (" + getDate() + ")";
    this->verificacoes.push_back(verificacao);
    
}

void Bicicleta::limpar()
{
    string verificacao = "Limpeza + (" + getDate() + ")";
    this->verificacoes.push_back(verificacao);
}

Automovel::Automovel()
{
    this->quilometragem = 0;
    this->verificacoes.clear();
}

Automovel::mover(int quilometragem){
    this->quilometragem = quilometragem;
}

void Automovel::listarVerificacoes()
{
    list <string> :: iterator t = verificacoes.begin();
    for(t = verificacoes.begin(); t != verificacoes.end(); ++t){
        cout<<*t<<endl;
    }
}

void Automovel::ajustar()
{
    string verificacao = "Ajuste + (" + getDate() + ") + km: " + to_string (quilometragem);
    this->verificacoes.push_back(verificacao);
}

void Automovel::limpar()
{
    string verificacao = "Limpeza + (" + getDate() + ") + km: " + to_string (quilometragem);
    this->verificacoes.push_back(verificacao);
}