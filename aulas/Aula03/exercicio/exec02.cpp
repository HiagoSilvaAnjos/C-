#include <iostream>

float arrendondar_baixo (float value) {
    return int(value);
}

float arrendondar_cima (float value) {

    float number = value;
    float decimal_value = value - int(value);

    if (decimal_value >= 0) {
        number = int(value) + 1;
    }

    return number;
}

float arrendondar_convencional (float value) {

    float number = value;
    float decimal_value = value - int(value);

    if (decimal_value >= 0.5) {
        number = int(value) + 1;
    } 

    number = int(value);

    return number;
}

int main () {

    float value = 9.4;

    std::cout << "Valor: " << value << std::endl;

    std::cout << "Arredondado para baixo: " << arrendondar_baixo(value) << std::endl;
    std::cout << "Arredondado para cima: " << arrendondar_cima(value) << std::endl;
    std::cout << "Arredondado para o convencional: " << arrendondar_convencional(value) << std::endl;

    return 0;
}