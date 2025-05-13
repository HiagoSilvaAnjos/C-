#include <iostream>

int main () {

    int lenght = 5;
    int i = 0;
    int fatorial = 0;
    int index = 0;

    int array [lenght];
    int arrayFatorial [lenght];

    for (index = 0; index < lenght; index++) {
        std::cout << "Digite um inteiro: " << std::endl;
        std::cin >> array[index];
        fatorial = 1;

        for (i = 1; i < array[index] + 1 ; i++) {
            fatorial *= i;
        }

        arrayFatorial[index] = fatorial;

    }

    std::cout << "Saída" << std::endl << std::endl;

    for (index = 0; index < lenght; index++) {
        std::cout << arrayFatorial[index] << std::endl;
    }

    return 0;
}