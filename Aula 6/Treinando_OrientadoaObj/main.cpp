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

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    
    cout << raziel(n) << endl;;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
