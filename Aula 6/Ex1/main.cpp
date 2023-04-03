/*
Crie um método do tipo boleano para verificar se um número é positivo e par, crie outro método que entre com números enquanto forem positivos e pares (para isso chame o método já criado)... 
...e ao final retorne quantos números foram digitados. 
*/

#include <cstdlib>
#include <iostream>

using namespace std;

bool raziel(int n) {
    if (n >= 0 && n % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main(int argc, char *argv[])
{
    int cont = 0;
    int n = 0;
    
    do {
    cin >> n;
    if (raziel(n)) {
        cout << "E PAR E POSITIVO" << endl;
        cont++;
    } else {
        break;
    }
    
    } while (true);
    
    cout << "Foram digitados " << cont << " numeros positivos e pares." << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
