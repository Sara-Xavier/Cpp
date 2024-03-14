#include <iostream>
using namespace std;

void converter_para_maiuscula(string &s){
    for (unsigned int i = 0; i < s.size() ; ++i){
        if (s[i] >= 'a' and s[i] <= 'z'){
            s[i] = s[i] - 32;
        }
    }
}

int main(){
    string texto;
    getline(cin, texto);
    converter_para_maiuscula(texto);
    cout << texto << endl;
    return 0;
}