#include <iostream>
using namespace std;

int main() {
    char ola[15] = "Ola mundo!"; // criando string com 15 índices (0 - 14) e usando apenas 10 espaços
    cout << ola << endl; //print da variável não limitada
    ola[3] = 0; // neste ponto do programa, colocamos o 0 no índice 3. Ou seja, o programa para no indice 3. (pode ser ola[3] = '/0')
    cout << ola << endl; //print da char ola limitada ao indice 3 = 0
    ola[3] = 32; // 32 na tabela ASCII é equivalente a espaço
    ola[4] = 77; // 77 é equivalente a 'M' na tabela ASCII
    cout << ola << endl;
    return 0;
}