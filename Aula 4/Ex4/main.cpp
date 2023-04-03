/*
Escreva um método que receba o ano e retorne 1 se for bissexto e 0 se não for. Um ano é bissexto quando divisível por 4, mas não por 100. Um ano também é bissexto quando divisível por 400.
*/

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int verificaBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        return 1; // é bissexto
    } else {
        return 0; // não é bissexto
    }
}

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    
    puts("");
    
    cout << verificaBissexto(n) << endl << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
