/*
Crie uma classe Estacionamento que tenha como atributos da classe dia, horaEntrada, horaSaida, e dois métodos.

o primeiro Solicita os dados para o usuário e o outro método calcule o valor a ser pago sendo que cada hora equivale a 5 reais.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

class Estacionamento {
public:
    int dia, horaEntrada, horaSaida;
    
    void solicitaDados() {
        cout << "Digite o dia (1-31): ";
        cin >> dia;
        cout << "Digite a hora de entrada (0-23): ";
        cin >> horaEntrada;
        cout << "Digite a hora de saida (0-23): ";
        cin >> horaSaida;
    }
    
    float calcularValor() {
        int horasEstacionado = horaSaida - horaEntrada;
        if (horasEstacionado < 0) {
            horasEstacionado += 24; // ficou estacionado durante a noite
        }
        float valorTotal = horasEstacionado * 5.0;
        return valorTotal;
    }
};

int main(int argc, char *argv[])
{
    Estacionamento obj;
    obj.solicitaDados();
    
    float valor = obj.calcularValor();
    cout << "Valor a ser pago: R$ " << valor << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
