#include"utils.h"

Utils::Utils(){
    this->celsius = 0;
    this->fahrenheit = 0;
}

Utils::Utils(float celsius){
    this->celsius = celsius;
}

Utils::Utils(float fahrenheit){
    this->fahrenheit = fahrenheit;
}

void Utils::imprimeResultado(){
    cout<<"Temperatura em Celsius: "<<(this->fahrenheit - 32)/1.8<<endl;
}