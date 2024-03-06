// Escreva um programa que leia um número inteiro e mostre se o número é par.

#include <iostream>
int main() {
  int a;
  std::cin >> a;
  
  if (a % 2 == 0) 
    std::cout << "Este numero e par" << a << std::endl;
  else 
    std::cout << "Este numero e impar" << std::endl;

  return 0;
}