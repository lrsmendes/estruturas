#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int angulo1, angulo2, angulo3;

    cout << "Informe os tr�s �ngulos do tri�ngulo: ";
    cin >> angulo1 >> angulo2 >> angulo3;
    cout << endl;

    if (angulo1 == angulo2 && angulo2 == angulo3) {
        cout << "O tri�ngulo � equil�tero" << endl;
    } else if (angulo1 == angulo2 || angulo1 == angulo3 || angulo2 == angulo3) {
        cout << "O tri�ngulo � is�sceles" << endl;
    } else {
        cout << "O tri�ngulo � escaleno" << endl;
    }
    
    cout << endl;    
    system("PAUSE");
    return EXIT_SUCCESS;
}
