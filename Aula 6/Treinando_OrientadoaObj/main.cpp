#include <cstdlib>
#include <iostream>

using namespace std;

/*
int raziel(int i){
    i = i * 2;
    raziel(i);
    return 0
}

Este programa trava porque a fun��o raziel � uma fun��o recursiva que n�o possui um caso base ou condi��o de sa�da. 
Portanto, ele continuar� chamando a si mesmo infinitamente at� causar um estouro de pilha e travar o programa.
*/

int raziel(int i){
    if (i <= 1) {
        return i;
    } else {
        i = i * 2;
        return raziel(i);
    }
}
/*
Este c�digo � um programa C++ que recebe um n�mero inteiro do usu�rio e retorna o resultado de uma fun��o chamada "raziel". A fun��o "raziel" recebe um inteiro "i" como entrada e realiza uma opera��o recursiva at� que "i" seja menor ou igual a 1.

A cada itera��o, o valor de "i" � dobrado (multiplicado por 2). Quando "i" finalmente atinge o valor 1 ou inferior, o valor de "i" � retornado. A fun��o "raziel" � ent�o chamada no programa principal, passando o n�mero inteiro inserido pelo usu�rio como argumento.

Ou seja, s� quando ele ir no limite do int que ele vai entregar um n�mero menor que 1...
*/

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    
    cout << raziel(n) << endl;;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
