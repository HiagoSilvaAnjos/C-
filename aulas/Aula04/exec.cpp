// 4. Na matemática, um número Harshad é um número inteiro que é divisível pela soma dos
// seus dígitos. O número 81, por exemplo, é um número Harshad pois tem-se que 8 + 1 == 9,
// e 81 % 9 == 0.
// Escreva uma função que receba um inteiro, e retorne um valor lógico que diz se ele é um
// número Harshad ou não. O processamento dessa função deverá chamar outra função que
// receberá um inteiro e deverá retornar a soma de seus dígitos. Utilize ambas funções em um
// programa que terá como entrada um número (inteiro e positivo), e deverá exibir como saída
// o valor lógico retornado pela função.
// Exemplo de Entrada: 81
// Exemplo de Saída: True
// Exemplo de Entrada: 143
// Exemplo de Saída: False

#include <iostream>


void isHashed (int value, int sumDigits) {
    bool numberIsHashed =  value % sumDigits;

    if (numberIsHashed == 0) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
}

void verifyHashed (int value ) {
    int rest = 0;
    int numberInput = value;

    while(numberInput / 10 > 0) {
        rest += numberInput%10;

        numberInput = numberInput/10;

        if ((numberInput / 10) == 0) {
            rest += numberInput;
        }
    }

    isHashed(value, rest);
}

int main() {

    int number = 0;
    bool numberIsHashed = false;
    int sum = 0;

    std::cout << "Insira um númrero inteiro positivo: " << std::endl;
    std::cin >> number;

    verifyHashed(number);

    return 0;
}