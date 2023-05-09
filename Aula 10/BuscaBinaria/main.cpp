#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

// Método para ordenar um vetor
void ordenaVetor(int vet[], int n) {
    sort(vet, vet + n);
}

// Método para realizar busca binária em um vetor ordenado (no meu entendimento)
int buscaBinaria(int vet[], int inicio, int fim, int valor) {
    if (fim >= inicio) { 
        int meio = inicio + (fim - inicio) / 2; //divide em dois para facilitar a busca
        
        if (vet[meio] == valor) { //se for igual ao elemento do meio, retorna o índice desse elemento no vetor.
            return meio;
        }
        
        if (vet[meio] > valor) { //se for menor que o elemento do meio, a busca continua na primeira metade do vetor (que vai desde o índice de início até o elemento anterior ao elemento do meio).
            return buscaBinaria(vet, inicio, meio - 1, valor);
        }
        
        return buscaBinaria(vet, meio + 1, fim, valor); //se for maior que o elemento do meio, a busca continua na segunda metade do vetor (do elemento seguinte ao elemento do meio até o índice final).
    }
    
    return -1; //se retornar isso significa que nada foi achado
}

// Método main
int main(int argc, char *argv[]) {
    int vet[5];
    for (int i = 0; i < 5; i++){
        cout << "Escreva o " << i+1 << "o valor do vetor: ";
        cin >> vet[i];
    }
    int tam = sizeof(vet) / sizeof(vet[0]); //conta pra pegar o tam do vetor

    // Ordenar o vetor
    ordenaVetor(vet, tam);
    
    // Imprimir o vetor ordenado
    cout << "\nVetor ordenado: ";
    for (int i = 0; i < tam; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;
    
    // Realizar busca binária no vetor ordenado
    cout << "\nEscreva o valor a ser buscado: ";
    int busca;
    cin >> busca;
    
    int resultado = buscaBinaria(vet, 0, tam - 1, busca);
    
    if (resultado == -1) {
        cout << "\nO valor " << busca << " nao foi encontrado no vetor." << endl;
    } else {
        cout << "\nO valor " << busca << " foi encontrado no indice " << resultado << " do vetor." << endl;
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
