#include <iostream>


int main() {
    int idade;
    std::string nome, endereco;
    std::getline( std::cin, nome);
    std::cin >> idade;
    std::cin.ignore();
    std::getline(std::cin, endereco);
    std::cout << "Ola " << nome <<  std::endl;
    std::cout << "Parabens pelo seus " << idade << " anos de vida" <<  std::endl;
    std::cout << "Enviaremos o presente para " << endereco <<  std::endl;
    return 0;
}