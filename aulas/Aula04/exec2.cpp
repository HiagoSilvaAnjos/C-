#include <iostream>

int fatorial (int number) {

    if(number == 0) {
        return 1;
    }

    return number * fatorial(number - 1);

}

int main () {

    std::cout << fatorial(5) << std::endl;

    return 0;
}