#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    float comprimento, largura, area;

    cout << "Digite o comprimento do ret�ngulo: ";
    cin >> comprimento;

    cout << "Digite a largura do ret�ngulo: ";
    cin >> largura;

    area = comprimento * largura;
    
    cout << endl;

    cout << "A area do ret�ngulo � de: " << area << endl << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
