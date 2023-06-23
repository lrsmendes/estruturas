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
    FilaDeArray filaDivisivelPor3(20);
    FilaDeArray filaDivisivelPor4(20);
    FilaDeArray filaDivisivelPor5(20);
    FilaDeArray filaNaoDivisivel(20);

    for (int i = 0; i < 20; i++) {
        int numero;
        cin >> numero;
        fila.Enfilera(numero);
    }

    for (int i = 0; i < 20; i++) {
        int numero = fila.Desenfilera();
        if (numero % 3 == 0) {
            filaDivisivelPor3.Enfilera(numero);
        } else if (numero % 4 == 0) {
            filaDivisivelPor4.Enfilera(numero);
        } else if (numero % 5 == 0) {
            filaDivisivelPor5.Enfilera(numero);
        } else {
            filaNaoDivisivel.Enfilera(numero);
        }
    }

    cout << "Fila dos números divisíveis por 3:\n";
    filaDivisivelPor3.Mostra();
    cout << "\n";

    cout << "Fila dos números divisíveis por 4:\n";
    filaDivisivelPor4.Mostra();
    cout << "\n";

    cout << "Fila dos números divisíveis por 5:\n";
    filaDivisivelPor5.Mostra();
    cout << "\n";

    cout << "Fila dos números não divisíveis por 3, 4 ou 5:\n";
    filaNaoDivisivel.Mostra();
    cout << "\n";

    system("PAUSE");
    return EXIT_SUCCESS;
}
