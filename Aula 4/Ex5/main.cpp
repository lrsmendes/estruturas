/*
Desenvolver um programa onde você entre via teclado com dois valores e após a digitação o usuário escolha um seletor de opção (menu) com as segudoublees opções:

- Multiplicação;

- Adição;

- Divisão;

- Subtração;

- Fim do processo;

Obs. Criar um método para cada opção e dentro do case chamar as funções respectivamente.
*/

#include <cstdlib>
#include <iostream>

double multi (double n1, double n2)
{
    return n1 * n2;
}

double add (double n1, double n2)
{
    return n1 + n2;
}

double sub (double n1, double n2)
{
       return n1 - n2;
}

double div (double n1, double n2)
{
    return n1 / n2;
}

void fim ()
{
    exit(0); 
}

using namespace std;

int main(int argc, char *argv[])
{   
    double n1, n2;
    
    cout << "Escreva um número: ";
    cin >> n1;
    
    cout << "Escreva outro número: ";
    cin >> n2;
    
    puts("");
    
    cout << "-- CALCULADORA DE VALORES --" << endl;
    cout << "1 - ADIÇÃO\n2 - MULTIPLICAÇÃO\n3 - DIVISÃO\n4 - SUBTRAÇÃO\n>";
    int escolha;
    
    cin >> escolha;
    
    switch (escolha){
           case 1:
                add(n1,n2);
                break;
                
           case 2:
                multi(n1,n2);
                break;
                
           case 3:
                div(n1,n2);
                break;
                
           case 4:
                sub(n1,n2);
                break;
                
           default:
                  fim(); 
           break;
    }
     
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
