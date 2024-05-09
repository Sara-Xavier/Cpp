#include <iostream>
using namespace std;

int main(){
    char letra;
    cin >> letra;
    if (letra == 'z') {
    cout << "z não é uma letra válida" << endl;} 
    else{
    cout << "Você digitou o caractere " << letra << endl;
    } return 0;
}