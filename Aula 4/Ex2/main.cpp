/*
Calcule a soma dos quadrados de dois n�meros fornecidos pelo usu�rio. Trabalhe com chamada de m�todos usadas como argumento de outros m�todos.
Dica: voc� vai criar 3 m�todos onde duas delas estar�o dentro de uma.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

double quad (int x) {
       return x * x;
}

double somaQuad(int x, int y) {
       return quad(x) + quad(y);
}

int main(int argc, char *argv[])
{
    int a, b;
    
    cout << "Digite dois n�meros: ";
    cin >> a >> b;
    
    int soma = somaQuad(a, b);
    cout << endl;
    
    cout << "A soma dos quadrados �: " << soma << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
