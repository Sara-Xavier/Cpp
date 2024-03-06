// Escreva um programa que leia o preço da gasolina e o consumo, leia o preço do etanol e o consumo e mostre
// qual combustível deve ser usado para reduzir os gastos. O preço é lido em reais, com duas casas decimais e o
// consumo em km (quilômetros por litro), com uma casa decimal.


#include <iostream>
int main() {
  double preco_gasolina, consumo_gasolina, preco_etanol, consumo_etanol;
  std::cin >> preco_gasolina >> consumo_gasolina >> preco_etanol >> consumo_etanol;

  double valor_gasolina = preco_gasolina * consumo_gasolina;
  double valor_etanol = preco_etanol * consumo_etanol;

  if (valor_gasolina > valor_etanol)
    std::cout << "Abasteca com etanol" << valor_etanol << std::endl;
  else 
    std::cout << "Abasteca com gasolina" << std::endl;
  

  return 0;

}