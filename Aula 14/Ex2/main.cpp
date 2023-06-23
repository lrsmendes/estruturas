/*
Desenvolva um programa onde você crie 3 variáveis e inicialize-as com o valor que quiser, um vetor de 10 posições que receba os valores diretamente dentro do programa como: 
0,10,20,30,40,50,60,70,80,90 e também 4 ponteiros chamados pt1, pt2, pt3 e vaux.

- Atribuir o pt1 ao endereço de memória de a, pt2 ao de b e pt3 ao de c;

- Exiba na tela o endereço de memória de a e o do ponteiro pt1;

- Exiba na tela o valor da variável apontada por pt1;

- Atribuir o valor do endereço de memória da posição 1 do vetor já criado para o ponteiro vaux e exibir na tela o valor da variável apontada pelo ponteiro;

- Agora varra o vetor de 2 em 2 a partir da posição 1 (ex. 1,3,5,7,9) e acrescente o valor de + 10 em cada posição, exibir na tela os valores dos vetores criados acima.

Ex. v[1] = 20, v[3] = 40...
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a = 1, b = 2, c = 3;
    int vet[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *pt1, *pt2, *pt3, *vaux;
    
    pt1 = &a;
    pt2 = &b;
    pt3 = &c;
    
    cout << "Endereco de memoria de a: " << &a << endl;
    cout << "Ponteiro de a: " << pt1 << endl;
    cout << "Valor da variavel PT1: " << *pt1 << endl;
    
    vaux = &vet[0];
    
    cout << "Valor do Vaux: " << *vaux << endl;
    
    for (int i = 0; i < 10; i += 2) {
        *(vaux + i) += 10;
    }
    
    cout << ("Valores do vetor apos adicionar +10 em cada posicao:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vet[i]);
    }
    
    puts("");
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
