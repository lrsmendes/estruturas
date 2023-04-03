/*
Calcule a soma dos quadrados de dois números fornecidos pelo usuário. Trabalhe com chamada de métodos usadas como argumento de outros métodos.
Dica: você vai criar 3 métodos onde duas delas estarão dentro de uma.
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
    
    cout << "Digite dois números: ";
    cin >> a >> b;
    
    int soma = somaQuad(a, b);
    cout << endl;
    
    cout << "A soma dos quadrados é: " << soma << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
