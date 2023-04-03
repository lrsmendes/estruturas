#include <cstdlib>
#include <iostream>

using namespace std;

void ordenar_vetor(int vetor[], int tamanho) {
    sort(vetor, vetor + tamanho); 
}

int main(int argc, char *argv[])
{
    int vet[5];
    int tamanho = 5;
    
    for (int i = 0; i < 5; i++) {
        cin >> vet[i];
    }
    
    cout << endl;
    
    cout << "Vetor antes da ordenação:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;

    ordenar_vetor(vet, tamanho); // chama o método para ordenar o vetor

    cout << "Vetor apos a ordenação:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
