// Faça um programa que leia três inteiros não negativos a, B e C e 
// mostre-os na ordem lida. Em seguida, mostre-os
// em ordem crescente e decrescente.


#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Digite três inteiros não negativos (separados por espaços): ";
    cin >> a >> b >> c;
    cout << "Ordem lida: " << a << " " << b << " " << c << endl;
    
    int menor = min(min(a, b), c);
    int maior = max(max(a, b), c);
    int medio = a + b + c - menor - maior;
    cout << "Ordem crescente: " << menor << " " << medio << " " << maior << endl;
    cout << "Ordem decrescente: " << maior << " " << medio << " " << menor << endl;
    return 0;
}

