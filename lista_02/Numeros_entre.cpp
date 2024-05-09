
#include <iostream>
using namespace std;

int main() {
int a, b;
cout << "Digite dois números inteiros (separados por espaço): ";
    cin >> a >> b;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    if (a <= b) {
        cout << "Números entre " << a << " e " << b << " (inclusive):" << endl;
        for (int i = a; i <= b; ++i) {
            cout << i << " ";
        }
    } else {
        cout << "Números entre " << a << " e " << b << " (inclusive):" << endl;
        for (int i = a; i >= b; --i) {
            cout << i << " ";
        }
    }
    
    cout << endl;
    
    return 0;



}