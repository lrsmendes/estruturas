/*
Escreva um programa que solicite ao usu�rio um valor inteiro e informe se esse n�mero � par ou �mpar. 
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int num;
    cin >> num;
    
    if (num % 2 == 0){
            cout << "PAR\n\n";
    }
    
    else {
         cout << "IMPAR\n\n";
    }
                     
    system("PAUSE");
    return EXIT_SUCCESS;
}
