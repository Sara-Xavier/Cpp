#include <iostream>
using namespace std;

bool impar(int n){
    return n % 2 == 1;

}



int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i]; 
    }
    int qtd_impares = 0;
    for (int i = 0; i < n; ++i){
        if(impar(a[i])){
            qtd_impares = qtd_impares + 1;
        }
    }
    int qtd_pares = n = qtd_impares;
    cout << qtd_impares << " " << qtd_pares << endl;
    return 0;
}