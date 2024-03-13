#include <iostream>
using namespace std;

void print_char(char c){
    cout << "O caractere \'" << c << "\' tem código ASCII " << static_cast<int>(c) << endl;
    return;
}

int main(){
    char c1, c2, c3;
    c1 = '1';
    c2 = '2';
    c3 = c1 + c2;
    print_char(c1);
    print_char(c2);
    print_char(c3);
    return 0;
}