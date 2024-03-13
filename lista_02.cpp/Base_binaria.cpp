#include <iostream>
using namespace std;

int conta_binario(int x) {
    int qtd = 0;
    while ( x > 0) {
        qtd = qtd + 1;
        x = x / 2;
    }
    return qtd;
}

int main(){
    int n;
    cin >> n;
    int qtd_binario = conta_binario(n);
    cout << qtd_binario << endl;
    return 0;

}