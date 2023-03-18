// Ler os elementos de uma matriz de ordem 6 e imprima o produto dos elementos que estão abaixo da diagonal principal
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int ordem = 6;
    int matriz[ordem][ordem];

    // Lê os elementos da matriz
    for(int i = 0; i < ordem; i++) {
        for(int j = 0; j < ordem; j++) {
            cout << "Digite o elemento da linha " << i+1 << " e coluna " << j+1 << ": ";
            cin >> matriz[i][j];
        }
    }

    // Calcula o produto dos elementos abaixo da diagonal principal
    int produto = 1;
    for(int i = 1; i < ordem; i++) {
        for(int j = 0; j < i; j++) {
            produto *= matriz[i][j];
        }
    }

    cout << endl;
    
    cout << "O produto dos elementos abaixo da diagonal principal equivalem a: " << produto << endl;
    
    system("PAUSE");
    return 0;
}

