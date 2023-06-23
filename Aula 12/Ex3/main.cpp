#include <cstdlib>
#include <iostream>

using namespace std;

class EntradaDeCinema{
private:
    int dia_do_filme;
    float horario;
    int sala;
    float valor;

public:
    // Construtor para inicializar os atributos
    EntradaDeCinema(int dia, float hora, int sal, float val){
        dia_do_filme = dia;
        horario = hora;
        sala = sal;
        valor = val;
    }

    // Calcula desconto com base na idade do cliente
    void CalculaDesconto(int idade){
        if (idade < 12){
            valor = valor - ((valor / 100) * 50);
        }
        else if (idade >= 12 && idade <= 15){
            valor = valor - ((valor / 100) * 40);
        }
        else if (idade >= 16 && idade <= 20){
            valor = valor - ((valor / 100) * 30);
        }
        else if (idade > 20){
            valor = valor - ((valor / 100) * 20);
        }
    }

    // Calcula desconto com base na idade do estudante e número de sua carteira
    void CalculaDesconto(int idade, int num_carteira){
        if (idade >= 12 && idade <= 15){
            valor = valor - ((valor / 100) * 40);
        }
        else if (idade >= 16 && idade <= 20){
            valor = valor - ((valor / 100) * 30);
        }
        else if (idade > 20){
            valor = valor - ((valor / 100) * 20);
        }
        // Verifica se o estudante tem carteira de estudante e dá desconto de 35%
        if (num_carteira > 0){
            valor = valor - ((valor / 100) * 35);
        }
    }

    // Calcula desconto com base no horário do filme
    void CalculaDescontoHorario(){
        if (horario < 16){
            valor = valor - ((valor / 100) * 10);
        }
    }

    // Imprime os dados do ingresso
    void toString(){
        cout << "Dia do Filme: " << dia_do_filme << endl;
        cout << "Horario: " << horario << endl;
        cout << "Sala: " << sala << endl;
        cout << "Valor: " << valor << endl;
    }
};

int main(int argc, char** argv){
    // Exemplo de uso da classe
    EntradaDeCinema obj(12, 15, 2, 150);
    obj.CalculaDesconto(11);
    obj.CalculaDescontoHorario();
    obj.toString();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
