// OPERADORES => ARITMETICOS => RELACIONAIS => LOGICOS
// CONDICIONAIS => IF/ELSE => SWITCH
// LAÇOS => FOR/WHILE => DO WHILE
// VETORES 


#include <iostream>

int main() {

    // Variables
    // int hour, minutes, seconds;
    // std::cout << "Digite a hora: ";
    // std::cin >> hour;

    // std::cout << "Digite o Minuto: ";
    // std::cin >> minutes;

    // seconds = (hour * 60 + minutes) * 60;

    // std::cout << "segundos " << seconds << std::endl;

    int denominador;
    int numerador;
  
    std::cout << "Digite o numerador: " << std::endl;
    std::cin >> numerador;
    std::cout << "Digite o denominador: " << std::endl;
    std::cin >> denominador;
  
  
  if (denominador == 0) {
    std::cout << "ERRO" << std::endl;
  } else {
  	
    int quociente = numerador / denominador;
    int resto = numerador % denominador;
  
    std::cout << "Quociente " << quociente << " Resto " << resto << std::endl;
  } 

    return 0;
}