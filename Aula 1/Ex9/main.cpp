#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float n1, n2, n3, n4, maior, menor, media, cont;
    cout << "Digite quatro n�meros: " << endl;
    cin >> n1 >> n2 >> n3 >> n4;

    // Encontrar o maior n�mero
    maior = n1;
    if (n2 > maior) {
        maior = n2;
    }
    if (n3 > maior) {
        maior = n3;
    }
    if (n4 > maior) {
        maior = n4;
    }

    // Encontrar o menor n�mero
    menor = n1;
    if (n2 < menor) {
        menor = n2;
    }
    if (n3 < menor) {
        menor = n3;
    }
    if (n4 < menor) {
        menor = n4;
    }

    // Calcular a m�dia aritm�tica
    media = (n1 + n2 + n3 + n4) / 4;

    // Mostrar o resultado na tela
    cout << "O maior n�mero �: " << maior << endl;
    cout << "O menor n�mero �: " << menor << endl;
    cout << "A m�dia aritm�tica �: " << media << endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
