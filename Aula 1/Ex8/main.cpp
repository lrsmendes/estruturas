/*
Crie um programa que solicite ao usu�rio os tr�s �ngulos de um tri�ngulo e informe se este � um tri�ngulo equil�tero, is�sceles ou escaleno. 
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    
    if (x1 == x2 && x2 == x3){
           cout << "Equil�tero" << endl;
    }
    
    else if (x1 != x2 && x2 != x3 && x1 != x3){
         cout << "Escaleno" << endl;
    }
    
    else if (x1 == x2 || x1 == x3 || x2 == x3){
         cout << "Is�sceles" << endl;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
