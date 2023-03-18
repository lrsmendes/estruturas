#include <cstdlib>
#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "pt_BR.utf8"); // define o locale como pt-br
    
    float a, b, c, s, area;

    cout << "Digite o primeiro lado do tri�ngulo: ";
    cin >> a;

    cout << "Digite o segundo lado do tri�ngulo: ";
    cin >> b;

    cout << "Digite o terceiro lado do tri�ngulo: ";
    cin >> c;

    s = (a + b + c) / 2.0;  // semiper�metro
    area = sqrt(s * (s-a) * (s-b) * (s-c));  // f�rmula de Heron

    cout.precision(4);
    cout << endl;
    cout << "A �rea do tri�ngulo �: " << area << "m�."<< endl << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
