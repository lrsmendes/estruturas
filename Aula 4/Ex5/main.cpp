/*
Desenvolver um programa onde voc� entre via teclado com dois valores e ap�s a digita��o o usu�rio escolha um seletor de op��o (menu) com as segudoublees op��es:

- Multiplica��o;

- Adi��o;

- Divis�o;

- Subtra��o;

- Fim do processo;

Obs. Criar um m�todo para cada op��o e dentro do case chamar as fun��es respectivamente.
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
    
    cout << "Escreva um n�mero: ";
    cin >> n1;
    
    cout << "Escreva outro n�mero: ";
    cin >> n2;
    
    puts("");
    
    cout << "-- CALCULADORA DE VALORES --" << endl;
    cout << "1 - ADI��O\n2 - MULTIPLICA��O\n3 - DIVIS�O\n4 - SUBTRA��O\n>";
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
