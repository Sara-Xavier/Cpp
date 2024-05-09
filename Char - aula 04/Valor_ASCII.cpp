#include <iostream>


int main() {
    char l;
    std::cin >> l;
    std::cout << "O valor ASCII de \'" << l << "\' é" << static_cast<int>(l) << std::endl; // Conversão estática
    return 0; 
}