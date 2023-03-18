#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    float comprimento, largura, area;

    cout << "Digite o comprimento do retângulo: ";
    cin >> comprimento;

    cout << "Digite a largura do retângulo: ";
    cin >> largura;

    area = comprimento * largura;
    
    cout << endl;

    cout << "A area do retângulo é de: " << area << endl << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
