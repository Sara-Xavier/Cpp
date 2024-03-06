// 3. Escreva um programa que leia 2 números inteiros e mostre o produto dos mesmos. Teste e seu programa para
// os valores a seguir:

// Numero 1                       Número 2                                     Resultado
// 1                             2                                         2
// 5                             −5                                        -25
// −3                            −2                                        6
// 1234                          4321                                      5332114
// 635241                        827361                                    525573629001
// 62817389                      10928371                                  686491732243319
// 1000000000                    999999999                                 999999999000000000
// 123456789                     999999999                                 123456788876543211
// 1123456789                    2987654321                                2412605082488629483
// −1000000000                  −1000000001                                1000000001000000000
// −2000000000                  −2000000000                                4000000000000000000

#include <iostream>

int main(){
    int a,b;
    std::cin >> a >> b;
    long long c = static_cast < long long > (a) * b;
    std::cout << c << std::endl;
    return 0;
}  