/*
Desenvolva um programa que tenha dois métodos fahrenheit e celsius, onde você entra com um valor em fahrenheit e transforma em celsius e vice e versa.
Fórmula Celsius: (fahrenheit – 32) * 5/9;
Fahrenheit = (Celsius * 9/5) + 32;
*/

#include <cstdlib>
#include <iostream>

using namespace std;


double fahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

double celsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main(int argc, char *argv[])
{
    double temperatura;
    char escolha;

    cout << "Digite a temperatura: ";
    cin >> temperatura;

    cout << "Digite 'F' para converter para Fahrenheit ou 'C' para converter para Celsius: ";
    cin >> escolha;
    
    cout << endl;

    switch(escolha) {
        case 'F':
            cout << "Temperatura em Fahrenheit: " << fahrenheit(temperatura) << endl;
            break;
        case 'C':
            cout << "Temperatura em Celsius: " << celsius(temperatura) << endl;
            break;
        default:
            cout << "Escolha inválida!" << endl;
    }
    
    cout << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
