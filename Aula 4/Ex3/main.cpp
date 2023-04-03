/*
Um n�mero primo � qualquer inteiro divis�vel por si pr�prio e por 1. Escreva um m�todo que receba um inteiro positivo e, se este n�mero for primo retorne 1, caso contr�rio retorne 0.
*/

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int verificaPrimo(int n) {
    if (n <= 1) {
        return 0; // n�meros menores ou iguais a 1 n�o s�o primos
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0; // encontrou um divisor, logo n�o � primo
        }
    }
    return 1; // n�o encontrou nenhum divisor, logo � primo
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
