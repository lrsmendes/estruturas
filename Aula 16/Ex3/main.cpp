#include <cstdlib>
#include <iostream>

using namespace std;

class ListaDeArray {
private:
    string* nomes;
    int* idades;
    int ProximaPosicaoLivre;
    int MAX;

public:
    ListaDeArray(int qtde) {
        MAX = qtde;
        nomes = new string[MAX];
        idades = new int[MAX];
        ProximaPosicaoLivre = 0;
    }

    void InsereFim(string nome, int idade) {
        if (ProximaPosicaoLivre < MAX) {
            nomes[ProximaPosicaoLivre] = nome;
            idades[ProximaPosicaoLivre] = idade;
            ProximaPosicaoLivre++;
        }
    }

    void Mostra() {
        for (int i = 0; i < ProximaPosicaoLivre; i++) {
            cout << "Nome: " << nomes[i] << ", Idade: " << idades[i] << endl;
        }
    }

    int RetiraFim() {
        if (ProximaPosicaoLivre > 0) {
            ProximaPosicaoLivre--;
            return idades[ProximaPosicaoLivre];
        }
        return -1; // Ou pode retornar um valor de erro específico
    }
};

int main(int argc, char *argv[]) {
    ListaDeArray lista(5);
    string nomes[5];

    for (int i = 0; i < 5; i++) {
        cout << "Digite o nome da pessoa " << (i + 1) << ": ";
        cin >> nomes[i];
    }

    for (int i = 0; i < 5; i++) {
        int idade;

        cout << "Digite a idade de " << nomes[i] << ": ";
        cin >> idade;
        cin.ignore(); // Limpar o buffer de entrada

        lista.InsereFim(nomes[i], idade);
    }

    cout << "\nDados da lista:\n";
    lista.Mostra();

    system("PAUSE");
    return 0;
}
