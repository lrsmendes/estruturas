#include <cstdlib>
#include <iostream>

using namespace std;

/*
int raziel(int i){
    i = i * 2;
    raziel(i);
    return 0
}

Este programa trava porque a função raziel é uma função recursiva que não possui um caso base ou condição de saída. 
Portanto, ele continuará chamando a si mesmo infinitamente até causar um estouro de pilha e travar o programa.
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
Este código é um programa C++ que recebe um número inteiro do usuário e retorna o resultado de uma função chamada "raziel". A função "raziel" recebe um inteiro "i" como entrada e realiza uma operação recursiva até que "i" seja menor ou igual a 1.

A cada iteração, o valor de "i" é dobrado (multiplicado por 2). Quando "i" finalmente atinge o valor 1 ou inferior, o valor de "i" é retornado. A função "raziel" é então chamada no programa principal, passando o número inteiro inserido pelo usuário como argumento.

Ou seja, só quando ele ir no limite do int que ele vai entregar um número menor que 1...
*/

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    
    cout << raziel(n) << endl;;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
