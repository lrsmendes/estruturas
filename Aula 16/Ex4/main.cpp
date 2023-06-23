/*
Escreva uma classe em C++ que simule uma calculadora bem simples. 
Essa classe deve ter como atributos duas variáveis double e um char. 
Deve possuir um construtor que recebe como parâmetro dois números e um caracter, correspondente a uma das operações básicas (+, -, *, /). 
Deve ter um método para calcular a operação desejada e um para imprimir o resultado. O programa deve considerar divisões por zero como sendo erros, e imprimir uma mensagem adequada.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

class Calculadora {
      double n1, n2;
      char escolha;
      
      public:
             Calculadora(double num1, double num2, char esc){
                                n1 = num1;
                                n2 = num2;
                                escolha = esc;
                                
                                switch(esc){
                                case '+':
                                     cout << num1 + num2;
                                     break;
                                     
                                case '-':
                                     cout << num1 - num2; 
                                     break;
                                     
                                case '/':
                                     if (num1 == 0 || num2 == 0){
                                            cout << "ERRO! NAO PODE DIVIDIR POR ZERO";
                                            break;
                                     }
                                     cout << num1 / num2;
                                     break;
                                     
                                case '*':
                                     cout << num1 * num2;
                                     break;
                                }
             }
};

int main(int argc, char *argv[])
{
    double num1, num2;
    char escolha;
    
    cout << "Escreva o primeiro numero: ";
    cin >> num1;
    
    cout << "Escreva o segundo numero: ";
    cin >> num2;
    
    puts ("");
    
    cout << "Escolha a operacao (+, -, *, /): ";
    cin.ignore();
    cin >> escolha;
    
    printf("\nResposta: ");
    
    Calculadora calc(num1, num2, escolha);
    
    puts("\n");
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
