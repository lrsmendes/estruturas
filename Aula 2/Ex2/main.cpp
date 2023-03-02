// Fazer um programa que digite vários números no vetor de tamanho máximo de 100 elementos...
// até digitar o número “0”. Imprimir quantos números iguais ao último número foram lidos. 
// O limite de números é 100.  Sem considerar o “0” como último número.
#include <cstdlib>
#include <iostream>
#include <locale.h>

using namespace std;

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    
    int vet[100];
    int ctn = 0;
    int ult = -1; //leitura dos numeros
    
    cout << "<c>Gustavo Pavani, 2023" << endl;
    do {
        cout << "Digite um número: ";
        cin >> vet[ctn];
        
        if (vet[ctn] != 0) {
            ult = vet[ctn];
            ctn++;
        }
        else {
             break;
        }
    } while (vet[ctn - 1]);
    
    int ctn2 = 0;
    for (int i = 0; i < ctn; i++) {
        if (vet[i] == ult) {
                   ctn2++;
        }
    }
    cout << endl;
    cout << "Foram digitados " << ctn2 << " números iguais a " << ult << "." << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
