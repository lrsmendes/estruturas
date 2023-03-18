#include <cstdlib>
#include <iostream>
#include <cmath>
#include <locale>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    
    float a, b, c, delta, x1, x2;
    
    // Solicita ao usu�rio os coeficientes da equa��o
    cout << "Informe os coeficientes da equa��o do segundo grau: " << endl;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
    cout << "C: ";
    cin >> c;
    
    // Calcula o delta
    delta = pow(b, 2) - 4*a*c;

    // Verifica se a equa��o possui ra�zes reais
    if (delta < 0) {
        cout << endl;
        cout << "A equacao n�o possui ra�zes reais." << endl << endl;
    }
    else {
        // Calcula as ra�zes
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        
        cout << endl;

        // Exibe as ra�zes
        cout << "As raizes da equac�o s�o: " << endl;
        cout << "X1: " << x1 << endl;
        cout << "X2: " << x2 << endl << endl;
    }

    
    system("PAUSE");
    return EXIT_SUCCESS;
}
