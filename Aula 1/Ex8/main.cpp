/*
Crie um programa que solicite ao usuário os três ângulos de um triângulo e informe se este é um triângulo equilátero, isósceles ou escaleno. 
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    
    if (x1 == x2 && x2 == x3){
           cout << "Equilátero" << endl;
    }
    
    else if (x1 != x2 && x2 != x3 && x1 != x3){
         cout << "Escaleno" << endl;
    }
    
    else if (x1 == x2 || x1 == x3 || x2 == x3){
         cout << "Isósceles" << endl;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
