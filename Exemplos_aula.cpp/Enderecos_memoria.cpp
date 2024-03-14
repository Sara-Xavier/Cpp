#include <iostream>


int main(){
    int a = 10, b = 20, c;
    c = (a + b) / 2;
    std::cout << "O dendereço de a é " << reinterpret_cast<std::uintptr_t>(&a) << " (" << &a << ")" << std::endl;
    std::cout << "O dendereço de b é " << reinterpret_cast<std::uintptr_t>(&b) << " (" << &b << ")" << std::endl;
    std::cout << "O dendereço de c é " << reinterpret_cast<std::uintptr_t>(&c) << " (" << &c << ")" << std::endl;
    return 0;
}