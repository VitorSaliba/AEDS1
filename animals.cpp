#include"animals.h"

Animal::Animal(){
    this->nome = " ";
    this->fala = " ";
}

Animal::Animal(string nome){
    this->nome = nome;
}

Animal::Animal(string fala){
    this->fala = fala;
}

Homem::Homem(string nome):Animal(){
    this->nome = "Homem";
}

void Homem::printNome(){
    cout<<"Meu nome eh: "<<this->nome<<endl;
}

Homem::Homem(string fala):Animal(){
    this->fala = "Oi";
}

void Homem::printFala(){
    cout<<" "<<this->fala<<endl;
}

Cachorro::Cachorro(string nome):Animal(){
    this->nome = "Cachorro";
}

void Cachorro::printNome(){
    cout<<"Meu nome eh: "<<this->nome<<endl;
}

Cachorro::Cachorro(string fala):Animal(){
    this->fala = "Au au";
}

void Cachorro::printFala(){
    cout<<" "<<this->fala<<endl;
}

Gato::Gato(string nome):Animal(){
    this->nome = "Gato";
}

void Gato::printNome(){
    cout<<"Meu nome eh: "<<this->nome<<endl;
}

Gato::Gato(string fala):Animal(){
    this->fala = "Miau Miau";
}

void Gato::printFala(){
    cout<<" "<<this->fala<<endl;
}