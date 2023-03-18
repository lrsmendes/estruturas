#include <cstdlib>
#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "pt_BR.utf8"); // define o locale como pt-br
    
    float a, b, c, s, area;

    cout << "Digite o primeiro lado do triângulo: ";
    cin >> a;

    cout << "Digite o segundo lado do triângulo: ";
    cin >> b;

    cout << "Digite o terceiro lado do triângulo: ";
    cin >> c;

    s = (a + b + c) / 2.0;  // semiperímetro
    area = sqrt(s * (s-a) * (s-b) * (s-c));  // fórmula de Heron

    cout.precision(4);
    cout << endl;
    cout << "A área do triângulo é: " << area << "m²."<< endl << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
