#include"animal.h"

Animal::Animal(){
    this->nome = "";
    this->som = "";
}

Animal::Animal(string nome){
    this->nome = nome;
}

void Animal::printNome(){
    cout<<"meu nome é: "<<nome<<endl;
}

Animal::Animal(string som){
    this->som = som;
}

void Animal::emitirSom(){
    cout<<"O som que emito é: "<<som<<endl;
}
