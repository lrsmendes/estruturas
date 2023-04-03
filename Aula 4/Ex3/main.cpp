/*
Um número primo é qualquer inteiro divisível por si próprio e por 1. Escreva um método que receba um inteiro positivo e, se este número for primo retorne 1, caso contrário retorne 0.
*/

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int verificaPrimo(int n) {
    if (n <= 1) {
        return 0; // números menores ou iguais a 1 não são primos
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0; // encontrou um divisor, logo não é primo
        }
    }
    return 1; // não encontrou nenhum divisor, logo é primo
}

int main(int argc, char *argv[])
{
    int num;
    cin >> num;
    
    puts("");
    
    cout << verificaPrimo(num) << endl << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
