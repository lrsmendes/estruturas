/*
Criar uma classe matem�tica que contenham dois atributos da classe A, B inteiros e os seguintes m�todos:

Entrada de dados; soma, multiplica��o, subtra��o e divis�o (fazer o tratamento da divis�o, n�o dividir por zero)
*/

#include <cstdlib>
#include <iostream>

using namespace std;

class mat {
      public:
             int A, B;
             void entrada (int a, int b){
                  A = a;
                  B = b;
             }
             
             int soma(){
                 return A + B;
             }
             
             int mult(){
                 return A * B;
             }
             
             int sub(){
                 return A - B;
             }
             
             float div(){
                   if (B == 0){
                         return 0;
                   } else {
                   return A / B;
                   }
             }
      };

int main(int argc, char *argv[])
{
    int i, n;
    cout << "Escreva um numero: ";
    cin >> i;
    
    cout << "Escreva outro numero: ";
    cin >> n;
    
    mat objeto;

    objeto.entrada(i, n);
    
    puts("");
    cout << "Soma: " << objeto.soma() << endl;
    cout << "Multiplicao: " << objeto.mult() << endl;
    cout << "Subtra��o: " << objeto.sub() << endl;
    if (n != 0){
          cout << "Divisao: " << objeto.div() << endl << endl;
    } else {
           cout << "Divisao: Impossivel dividir por zero!" << endl;
    }
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
