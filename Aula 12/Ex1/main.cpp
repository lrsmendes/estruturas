#include <cstdlib>
#include <iostream>

using namespace std;

class Conta {
      public:
              int numero;
              double saldo;
              double limite;
              string nome;
              
             Conta(int num, double sal, double lim, string nom) {
                       numero = num; 
                       saldo = sal; 
                       limite = lim;
                       nome = nom;
             }

             bool saca(double valor) {
                  if (saldo < valor) {
                        return false;
                  } else {
                        saldo -= valor;
                        return true;
                  }
             }

             double deposita(double quantidade) {
                  saldo += quantidade;
                  return saldo;
             }

             bool transfere(Conta destino, double valor) {
                  bool retirou = saca(valor);
                  if (retirou == false) {
                        return false;
                  } else {
                        destino.deposita(valor);
                        return true;
                  }
             }
};

int main(int argc, char** argv) {
    double saldo, limite;
    string nome;
    int numero;

    cout << "Entre com o nome, numero da conta, saldo e limite \n";
    cin >> nome >> numero >> saldo >> limite;

    Conta fa23(numero, saldo, limite, nome); // criando o objeto Fa23
    Conta fa24(236, 1000, 100, "Paulo");   // criando o objeto Fa24

    if (fa23.transfere(fa24, 1200)) {
        cout << "Transferencia realizada \n";
    } else {    
        cout << "Transferencia nao realizada \n";
    }

    system("PAUSE");
    return EXIT_SUCCESS;
}
