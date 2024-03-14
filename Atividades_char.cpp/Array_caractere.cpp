//uma string pode ser vista também, como um array de caracteres

#include <iostream>
using namespace std;

int main (){
    string s;
    getline(cin, s);
    cout << s << endl;
    unsigned int tamanho = s.length();
    for (unsigned int i = 0; i < tamanho; ++i){
        if (s[i] == ' '){
            s[i] = '-';
        }
    }
    cout << s << endl;
    return 0;
}

// programa que recebe uma string e troca espaços por "-"