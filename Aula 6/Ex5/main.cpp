#include <cstdlib>
#include <iostream>

using namespace std;

int* somar_vetores(int vetor1[], int vetor2[], int tamanho) { //* com int é ponteiro para memória
    int* resultado = new int[tamanho];

    for (int i = 0; i < tamanho; i++) {
        resultado[i] = vetor1[i] + vetor2[i];
    }
    return resultado;
}

int main(int argc, char *argv[])
{
    int tamanho;
    cout << "Digite o tamanho dos vetores: ";
    cin >> tamanho;
    
    int vet1[tamanho], vet2[tamanho];
    cout << "Digite os elementos do vet1: ";
    for (int i = 0; i < tamanho; i++) {
        cin >> vet1[i];
    }

    cout << "Digite os elementos do vet2: ";
    for (int i = 0; i < tamanho; i++) {
        cin >> vet2[i];
    }
    
    int* resultado = somar_vetores(vet1, vet2, tamanho);

    cout << "Resultado: ";
    for (int i = 0; i < tamanho; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    delete[] resultado;

    
    system("PAUSE");
    return EXIT_SUCCESS;
}
