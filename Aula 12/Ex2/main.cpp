/*
Escreva uma classe chamada classe ìComparavelî que tem como atributo um valor inteiro, um construtor para inicializar o atributo 
e os mÈtodos ÈMaiorOuIgual, ÈMenorOuIgual e ÈDiferenteDe que recebem um valor do tipo int como par‚metro e retornam true 
se o valor encapsulado for, respectivamente, maior ou igual, menor ou igual ou diferente do passado como par‚metro.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

class Comparavel{
      int valor;
      
      public:
             Comparavel(int val){
                            valor = val;
             }
             
             bool eMaiorOuIgual(int num){
                 if (num >= valor){
                         cout << "E MAIOR OU IGUAL!\n";
                         return true;
                 } else{
                        cout << "NAO E MAIOR OU IGUAL!\n";
                        return false;
                 }
             }
             
             bool eMenorOuIgual(int num){
                 if (num <= valor){
                         cout << "E MENOR OU IGUAL!\n";
                         return true;
                 } else{
                        cout << "NAO E MENOR OU IGUAL!\n";
                        return false;
                 }
             }
             
             bool eDiferenteDe(int num){
                 if (num != valor){
                         cout << "E DIFERENTE DO VALOR!\n";
                         return true;
                 } else {
                        cout << "E IGUAL AO VALOR!\n";
                        return false;
                 }
             }
};

int main(int argc, char *argv[])
{
    Comparavel obj(300);
    obj.eMaiorOuIgual(200);
    obj.eMenorOuIgual(400);
    obj.eDiferenteDe(200);
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
