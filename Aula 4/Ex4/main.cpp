/*
Escreva um m�todo que receba o ano e retorne 1 se for bissexto e 0 se n�o for. Um ano � bissexto quando divis�vel por 4, mas n�o por 100. Um ano tamb�m � bissexto quando divis�vel por 400.
*/

#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;

int verificaBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        return 1; // � bissexto
    } else {
        return 0; // n�o � bissexto
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
