#include <cstdlib>
#include <iostream>

using namespace std;

class FilaDeArray {
private:
    int* VET;
    int ProximaPosicaoLivre;
    int MAX;
    
public:
    FilaDeArray(int qtde) {
        MAX = qtde;
        VET = new int[MAX];
        ProximaPosicaoLivre = 0;
    }

    void Enfilera(int n) {
        if (ProximaPosicaoLivre < MAX)
            VET[ProximaPosicaoLivre++] = n;
    }

    void Mostra() {
        for (int i = 0; i < ProximaPosicaoLivre; i++) {
            cout << VET[i] << "\n";
        }
    }

    int Desenfilera() {
        if (ProximaPosicaoLivre > 0) {
            int valorDesenfileirado = VET[0];
            for (int i = 0; i < ProximaPosicaoLivre - 1; i++) {
                VET[i] = VET[i + 1];
            }
            ProximaPosicaoLivre--;
            return valorDesenfileirado;
        }
    }
};

int main(int argc, char *argv[]) {
    FilaDeArray fila(20);
    FilaDeArray filaPares(20);
    FilaDeArray filaImpares(20);

    for (int i = 0; i < 20; i++) {
        int numero;
        cin >> numero;
        fila.Enfilera(numero);
    }

    for (int i = 0; i < 20; i++) {
        int numero = fila.Desenfilera();
        if (numero % 2 == 0) {
            filaPares.Enfilera(numero);
        } else {
            filaImpares.Enfilera(numero);
        }
    }

    cout << "Fila de pares:\n";
    filaPares.Mostra();
    cout << "\n";

    cout << "Fila de ímpares:\n";
    filaImpares.Mostra();
    cout << "\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
