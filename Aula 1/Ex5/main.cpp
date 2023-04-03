/*
Escreva um programa que solicite ao usuário um valor inteiro e informe se esse número é par ou ímpar. 
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
