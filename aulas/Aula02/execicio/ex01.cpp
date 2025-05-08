// Estrutura de Repetição

#include <iostream>

int main () {

    int valorMaximo = 1000;
    int soma = 0;

    for (int i = 0 ; i < valorMaximo; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    } 

    std::cout << soma;

    return 0;

}