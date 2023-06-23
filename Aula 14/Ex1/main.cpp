/*
Desenvolva um programa onde voc� crie 3 vari�veis a, b e soma e dois ponteiros: pont1 e pont2, todos do tipo int.

- Pe�a para o usu�rio entrar com o valor de a e b via teclado e fa�a com que os ponteiros recebam o endere�o de mem�ria de a e b.

- Exibir na tela o endere�o de mem�ria das vari�veis a, b e dos dois ponteiros.

- Some a e b e guarde dentro da vari�vel soma.

- Atribuir o conte�do de soma para o ponteiro pont1 e exibir o conte�do do pont1.
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
