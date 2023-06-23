#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int i = 10, j = 20, k = 30;
    int vet[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    cout << "Endereco de I: "<< &i << endl;
    cout << "Endereco de J: "<< &j << endl;
    cout << "Endereco de K: "<< &k << endl;
    
    int *p;
    p = &i;
    
    cout << "Conteudo de P: " << p << "\n";
    
    puts("");
    
    for (int i = 0; i < 10; i++){
        cout << "Endereco da posicao " << i+1 << " do vetor: "<< &vet[i];
        puts("");
    }
    
    puts("");
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
