/* Criar um programa que leia dados de um vetor de 12 elementos inteiros. 
 * Imprima o maior e menor sem ordenar, o percentual de números pares e 
 * a média dos elementos do vetor.
 */
 
#include <cstdlib>
#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char *argv[])
{   setlocale(LC_ALL, "Portuguese");
    setlocale(LC_NUMERIC, "pt_BR");
    
    int vet[12];
    double mai = 0, men = 0, par = 0, perc, soma = 0;
    printf("(c)Raziel, 2023\n\n");
    
    for (int i = 0; i < 12; i++){
        printf("Escreva o %d° valor: ", i+1);
        cin >> vet[i];
        soma += vet[i];
        
        if (i == 0) {
              men = vet[i];
              mai = vet[i];
        }
        
        else if (vet[i] > mai){
             mai = vet[i];
        }
        
        if (vet[i] < men){
                   men = vet[i];
        }
    }
    
    for (int i = 0; i < 12; i++){
        if (vet[i] % 2 == 0) {
                   par += 1;
        }        
    }
    
    perc = (par / 12) * 100;
    
    cout << endl;
    cout << endl;
    cout << "Percentual de Números Pares: " << perc << "%"<< endl;
    cout << "Maior: " << mai << endl;
    cout << "Menor: " << men << endl;
    cout << "Média arimética: " << (soma / 12) << endl << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
