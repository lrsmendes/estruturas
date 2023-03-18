#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float baseMaior, baseMenor, altura, area;

    cout << "Digite o valor da base maior do trapezio: ";
    cin >> baseMaior;

    cout << "Digite o valor da base menor do trapezio: ";
    cin >> baseMenor;

    cout << "Digite o valor da altura do trapezio: ";
    cin >> altura;

    area = ((baseMaior + baseMenor) * altura) / 2.0;

    cout << endl;
    cout << "A area do trapezio e: " << area << "m²." << endl;
    
    cout << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
