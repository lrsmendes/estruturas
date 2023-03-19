#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int angulo1, angulo2, angulo3;

    cout << "Informe os três ângulos do triângulo: ";
    cin >> angulo1 >> angulo2 >> angulo3;
    cout << endl;

    if (angulo1 == angulo2 && angulo2 == angulo3) {
        cout << "O triângulo é equilátero" << endl;
    } else if (angulo1 == angulo2 || angulo1 == angulo3 || angulo2 == angulo3) {
        cout << "O triângulo é isósceles" << endl;
    } else {
        cout << "O triângulo é escaleno" << endl;
    }
    
    cout << endl;    
    system("PAUSE");
    return EXIT_SUCCESS;
}
