// Escreva um programa que leia um números inteiro não negativo n e mostre os fatores primos de n.
// Exemplo: Os fatores primos de 60 são 2, 2, 3, 5. Isso porque 2 × 2 × 3 × 5 = 60.


#include <iostream>
using namespace std;

void print_fatoracao(int x){
    int fator = 2;
    while (x != 1){
        if (x % fator == 0){
            cout << fator << " ";
            x = (x / fator);
        }else{
            fator = fator + 1;
        }
    }
    cout << "\n";

}

int main(){
    int n;
    cin >> n;
    print_fatoracao(n);
    return 0;
}
