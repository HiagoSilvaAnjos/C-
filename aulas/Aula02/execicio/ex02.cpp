#include <iostream>

int main () {
    float media = 0;
    float positivos = 0;
    float negativos = 0;
    float porcentagemPositivos = 0;
    float porcentagemNegativos = 0;
    int entrada = 0;
    float soma = 0;
    int totalEntradas = 0;

    std::cout << "Insira um valor ou 0 para encerrar: ";
    std::cin >> entrada;

    while (entrada != 0) {
        soma += entrada;
        totalEntradas++;

        if (entrada > 0) positivos++;
        else negativos++;

        std::cout << "Insira um valor ou 0 para encerrar: ";
        std::cin >> entrada;
    }

    if (totalEntradas > 0) {
        media = soma / totalEntradas;
        porcentagemPositivos = (positivos / totalEntradas) * 100;
        porcentagemNegativos = (negativos / totalEntradas) * 100;
    }

    std::cout << "Média: " << media << std::endl;
    std::cout << "Total positivos: " << positivos << std::endl;
    std::cout << "Total negativos: " << negativos << std::endl;
    std::cout << "Porcentagem Positivos: " << porcentagemPositivos << "%" << std::endl;
    std::cout << "Porcentagem Negativos: " << porcentagemNegativos << "%" << std::endl;

    return 0;
}
