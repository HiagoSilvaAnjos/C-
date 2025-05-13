#include <iostream>

int calculateFatorial (int value) {

    int fatorial = 1;
    int index = 1;

    for (index; index < value + 1; index++) {
        fatorial *= index;
    }

    return fatorial;

}

int main () {

    int lenght = 5;
    int index = 0;
    int array [lenght];
    int arrayFatorial [lenght];
    int numberFatorial = 0;

    for (index; index < lenght; index++) {
        std::cout << "Digite um inteiro: " << std::endl;
        std::cin >> array[index];

        numberFatorial = calculateFatorial(array[index]);
        arrayFatorial[index] = numberFatorial;

    }

    std::cout << "Saída" << std::endl << std::endl;

    for (index = 0; index < lenght; index++) {
        std::cout << arrayFatorial[index] << " | ";
    }

    std::cout << std::endl;

    return 0;
}