/*
Desenvolva um programa onde você crie 3 variáveis a, b e soma e dois ponteiros: pont1 e pont2, todos do tipo int.

- Peça para o usuário entrar com o valor de a e b via teclado e faça com que os ponteiros recebam o endereço de memória de a e b.

- Exibir na tela o endereço de memória das variáveis a, b e dos dois ponteiros.

- Some a e b e guarde dentro da variável soma.

- Atribuir o conteúdo de soma para o ponteiro pont1 e exibir o conteúdo do pont1.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int a, b, soma;
    int *pont1, *pont2;
    
    cin >> a >> b;
    
    pont1 = &a;
    pont2 = &b;
    
    cout << "Valor &a: " << pont1 << endl;
    cout << "Valor &b: " << pont2 << endl;
    
    soma = a+b;
    
    pont1 = &soma;
    cout << "Valor soma: " << pont1 << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
