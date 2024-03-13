#include <iostream>
using namespace std;

int main() {
    char l;
    cin >> l;
    cout << "O valor ASCII de " << l << "é" << static_cast<int>(l) << endl;
    return 0; 
}