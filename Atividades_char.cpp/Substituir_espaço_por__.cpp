#include <iostream>
int main(){
    std::string s;
    getline(std::cin, s);
    std::cout << s << std::endl;
    unsigned int tamanho = s.length(); // Pode ser tbm "s.size()"
    for (unsigned int i = 0; i < tamanho; ++i){
        if (s[i] == ' ') {
            s[i] = '-';
        }
    }
    std::cout << s << std::endl;
    return 0;
}