#include <cstdlib>
#include <iostream>

using namespace std;

int particionar(int vet[], int esq, int dir) {
    int i = esq, j = dir, pivo = vet[(esq + dir) / 2];
    
    while (i <= j) {
        while (vet[i] < pivo) i++;
        while (vet[j] > pivo) j--;
        
        if (i <= j) {
            swap(vet[i], vet[j]);
            i++;
            j--;
        }
    }
    
    return i;
}

// Função recursiva que aplica o Quicksort no vetor
void quicksort(int vet[], int esq, int dir) {
    int pivo = particionar(vet, esq, dir);
    
    if (esq < pivo - 1) {
        quicksort(vet, esq, pivo - 1);
    }
    if (pivo < dir) {
        quicksort(vet, pivo, dir);
    }
}


int main(int argc, char *argv[])
{
    int vet[7] = {3,6,1,2,8,10,4};
    int tam = sizeof(vet) / sizeof(vet[0]);
    
    cout << "Vetor original: ";
    for (int i = 0; i < tam; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;
    
    quicksort(vet, 0, tam - 1);
    
    cout << "Vetor ordenado: ";
    for (int i = 0; i < tam; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
