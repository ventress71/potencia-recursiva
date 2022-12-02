// potencia recursiva.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
int res = 1;
int Pow(int value1, int value2);

int main()
{
    int val1 = 0, val2 = 0;

    std::cout << "Ingresa un numero\n";
    std::cin >> val1;

    std::cout << "Ingresa el numero por el cual lo quieres elevar\n";
    std::cin >> val2;

    system("CLS");

    std::cout << "El resultado es: " << Pow(val1, val2) << std::endl;
}

int Pow(int value1, int value2) {

    if (value2 > 0) {
        res *= value1;

        value2--;

        Pow(value1, value2);
    }
    else {
        return res;
    }
}