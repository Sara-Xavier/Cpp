// Escreva um programa que leia a quantidade de dias desde o início do ano e mostre quantas semanas e quantos
// dias já se passaram desde do dia primeiro de janeiro.

#include <iostream>

int main(){
    int quantidade_de_dias, semanas, dias_restantes;
    std::cin >> quantidade_de_dias;
    semanas = quantidade_de_dias / 7;
    dias_restantes = quantidade_de_dias % 7;
    std::cout << "Desde o primeiro dia de janeiro, passaram-se " << semanas << "semanas e " << dias_restantes << "dia(s)" << std::endl;
    return 0;
}  