// Escreva um programa que leia a base e a altura de um triângulo e mostre a sua área. Para calcular a área de
// um triângulo multiplica-se a altura pela base e divide por 2.


#include <iostream>
#include <iomanip>

int main(){
    double base, altura;
    std::cin >> base >> altura;
    double area = (base + altura) / 2.0;
    std::cout << std::fixed << std::setprecision(50) << area << std::endl;
    return 0;
}  