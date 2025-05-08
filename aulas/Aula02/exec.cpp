// Estrutura de Repetição

#include <iostream>

int main () {

    int i = 0;

    int j = 0;

    int k = 0;

    // FOR
    for (i; i <= 10; i++) {
        std::cout << "Valor de i: " << i << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;

    // WHILE
    while (j <= 10) {
        std::cout << "Valor de j: " << j << std::endl;
        j++;
    }

    std::cout << std::endl;
    std::cout << std::endl;

    // DO WHILE
    do {
        std::cout << "Valor de k: " << k << std::endl;
        k++;
    } while (k <= 10);

    int value = 0;
    std::cout << "Digite um valor: " << std::endl; 
    std::cin >> value;

    while(value % 2 == 0) {

        std::cout << "é par: " << value << std::endl; 

        std::cout << "Digite um valor: "; 
        std::cin >> value;

    }

    std::cout << "Digitou um impar!" << std::endl;

    // i % 3 == 0 || i % 5 == 0

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