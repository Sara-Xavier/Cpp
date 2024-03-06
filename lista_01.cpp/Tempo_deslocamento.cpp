// Escreva um programa que leia a distância d (1 ≤ d ≤ 10 ∗ ∗9), em quilômetros, entre duas cidades, o tempo de
// deslocamento t (0.00 < t ≤ 100.00) efetuado de veículo automotor entre as duas cidades, em horas, com duas
// casas decimais, e mostre a velocidade média do deslocamento, com uma casa decimal.

#include <iostream>


int main(){
    double espaço, tempo;
    std::cin >> espaço >> tempo;
    double velocidade = espaço / tempo;
    std::cout << velocidade << std::endl;
    return 0;
}  