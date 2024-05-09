#include <iostream>
using namespace std;

int qtd_divisores_dir(int n){
    int qtd = 0
    for (int i = 1; i <+n; ++i){
        if (n % i == 0)
        qtd++;
    }
    return qtd;
}

int (main){
    int n;
    cin >> n;
    cout << qtd_divisores_for(n) << endl;
    cout << qtd_divisores_while(n) << endl;
    cout << qtd_divisores_do_while(n) << endl;
    return 0;
}

int qtd_divisores_while(int n){
    int qtd = 0
    int d = 1;
    while (d <= n){
        if (n % d == 0)
        qtd++;
    }
    d = d + 1
    return qtd;
}

int qtd_divisores_do_while(int n){
    int qtd = 0
    int divisor = 1;
    do{
        if (n % divisor == 0){
            contador++;
        }
        divisor++;
    } 
    while (divisor <= n);
    return qtd;
}