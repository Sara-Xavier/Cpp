#include <iostream>
using namespace std;

int main(){
    int i;
    double notas[30], soma = 0, media;

    for (i = 0; i < 30; ++i){
        cin >> notas[i];
        soma += notas[i];
    }
        
    media = soma / 30;
    cout<< "A média das notas é: " << media << endl;
    return 0;
}