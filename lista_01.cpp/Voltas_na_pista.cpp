// # Dada a distância d (10 ≤ d ≤ 1000), em metros, de uma pista de corrida circular e uma meta k (1 ≤ k ≤ 20),
// # em kilômetros, que você deseja treinar, faça um programa que mostre a quantidade de voltas a ser dada na pista
// # e quantos metros deve ser feito para completar seu objetivo.
// # Exemplo: Considere uma pista de 400m e um treino a ser feito de 3km. Para completar o treino são necessárias
// # 7 voltas completas e uma última volta de 200m.


#include <iostream>

int main(){
  int d, k;
  std::cin >> d >> k;
  int metros = k * 1000;
  int voltas = metros/d;
  int ultima_volta = metros%d;
  std::cout << voltas << " " << ultima_volta << std::endl;
  return 0;
}