#include"veiculo.h"

Veiculo::Veiculo(){
    this->peso = 0;
    this->velMaxima = 0;
    this->preco = 0;
}

Veiculo::Veiculo(float peso){
    this->peso = peso;
}

void Veiculo::imprimePeso(){
    cout<<"O peso do veiculo eh: "<<this->peso<<endl;
}

void Veiculo::setPeso(float peso){
    this->peso = peso;
}

float Veiculo::getPeso(){
    return this->peso;
}

Veiculo::Veiculo(int velMaxima){
    this->velMaxima = velMaxima;
}

void Veiculo::imprimeVel(){
    cout<<"A velocidade maxima do veiculo eh: "<<this->velMaxima<<endl;
}

void Veiculo::setVel(int velMaxima){
    this->velMaxima = velMaxima;
}

int Veiculo::getVel(){
    return this->velMaxima;
}

Veiculo::Veiculo(float preco){
    this->preco = preco;
}

void Veiculo::imprimePreco(){
    cout<<"O preco do veiculo eh: "<<this->preco<<endl;
}

void Veiculo::setPreco(float preco){
    this->preco = preco;
}

float Veiculo::getPreco(){
    return this->preco;
}

Motor::Motor(){
    this->cilindros = 0;
    this->potencia = 0;
}

Motor::Motor(int cilindros){
    this->cilindros = cilindros;
}

void Motor::imprimeCilindros(){
    cout<<"Numero de cilindros do motor: "<<this->cilindros<<endl;
}

void Motor::setCilindros(int cilindros){
    this->cilindros = cilindros;
}

int Motor::getCilindros(){
    return this->cilindros;
}


Motor::Motor(int potencia){
    this->potencia = potencia;
}

void Motor::imprimeCilindros(){
    cout<<"Potencia do motor: "<<this->potencia<<endl;
}

void Motor::setPotencia(int potencia){
    this->potencia = potencia;
}

int Motor::getPotencia(){
    return this->potencia;
}


Caminhao::Caminhao(){
    this->peso = 0;
    this->alturaMaxima = 0;
    this->comprimento = 0;
}

Caminhao::Caminhao(float peso){
    this->peso = peso;
}

void Caminhao::imprimePeso(){
    cout<<"O peso do caminhao eh: "<<this->peso<<endl;
}

void Caminhao::setPeso(float peso){
    this->peso = peso;
}

int Caminhao::getPeso(){
    return this->peso;
}

Caminhao::Caminhao(float alturaMaxima){
    this->alturaMaxima = alturaMaxima;
}

void Caminhao::imprimeAltura(){
    cout<<"A altura maxima do caminhao eh: "<<this->alturaMaxima<<endl;
}

void Caminhao::setAltura(float alturaMaxima){
    this->alturaMaxima = alturaMaxima;
}

float Caminhao::getAltura(){
    return this->alturaMaxima;
}

Caminhao::Caminhao(float comprimento){
    this->comprimento = comprimento;
}

void Caminhao::imprimeComprimento(){
    cout<<"O comprimento do caminhao eh: "<<this->comprimento<<endl;
}

void Caminhao::setComprimento(float comprimento){
    this->comprimento = comprimento;
}

float Caminhao::getComprimento(){
    return this->comprimento;
}