/*
Escreva um programa que solicite ao usu�rio um ano qualquer e informe se esse ano � bissexto. 
Um ano � considerado bissexto se ele for divis�vel por quatro, mas n�o por 100. 
Ou ent�o se ele for divis�vel por 400.  
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int ano;
    cin >> ano;
    
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        cout << "O ano " << ano << " � bissexto" << endl;
    } else {
        cout << "O ano " << ano << " nao � bissexto" << endl;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
