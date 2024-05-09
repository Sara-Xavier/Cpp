// # Escreva um programa que leia 2 números inteiros a e b e calcule a média aritmética entre eles. A média deve ser
// # obrigatoriamente um número inteiro.

#include <iostream>

int main(){
    int a,b;
    std::cin >> a >> b;
    int media = (a + b) / 2;
    std::cout << media << std::endl;
    return 0;
}  