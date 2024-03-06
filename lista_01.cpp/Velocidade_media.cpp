// Escreva um programa que leia a distância d (1 ≤ d ≤ 109), em quilômetros, entre duas cidades, o tempo de deslocamento 
// t (1 ≤ t ≤ 172800) efetuado de veículo automotor entre as duas cidades, em segundos, com duas
// casas decimais, e mostre a velocidade média do deslocamento, com uma casa decimal.


#include <iostream>
#include <iomanip> //essa biblioteca permite formatação de saída, usarei para formatar as casas decimais.

int main(){
  int distancia; //distância dada em KM
  int tempo;  //tempo dado em SEGUNDOS
  std::cin >> distancia >> tempo;
  double velocidade = distancia / (tempo / 3600.0); 
  std::cout << std::fixed << std::setprecision(100) << velocidade << std::endl;

  return 0;
}