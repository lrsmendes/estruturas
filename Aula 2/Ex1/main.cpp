// Fazer um programa que leia v�rios n�meros inteiros e positivos. 
// A leitura se encerra quando encontrar um n�mero negativo ou quando o vetor ficar completo.
// Sabe-se que o vetor possui, no m�ximo, 10 elementos. Gerar e imprimir um vetor onde cada 
// elemento � o inverso do correspondente do vetor original. 


#include <cstdlib>
#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    
    int num[10];
    int aux;
    int cont;
    
    for (int i = 0; i <= 9; i++){
        cout << "Escreva um n�mero: ";
        cin >> num[i];
        
        if (num[i] < 0) {
                   cont = i;
                   break;
        }
    }
    
    cout << endl;
        
    for (int i = 0; i <= 9; i++) {
        num[i] = (num[i] * - 1);
    }
    
    for (int i = 0; i <= cont - 1; i++) {
        cout << "num[" << i+1 << "]: " << num[i] << endl;
    }
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
