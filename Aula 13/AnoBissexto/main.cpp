#include <cstdlib>
#include <iostream>

using namespace std;

class Calendario {
    int ano;
    int mes;
    int dia;

public:
    Calendario(int a, int m, int d){
                   ano = a;
                   mes = m;
                   dia = d;
    }

    bool Bissexto() {
        if (((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0))
            return true;
        else
            return false;
    }

    int DiaDaSemana(int ano, int mes, int dia) {
        int f = ano + dia + 3 * (mes - 1) - 1;

        if (mes < 3)
            ano--;
        else
            f -= int(0.4 * mes + 2.3);

        f += int(ano / 4) - int((ano / 100 + 1) * 0.75);

        f %= 7;

        return f + 1;
    }

    void ImprimirCalendario() {
        cout << "DOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n\n";

        short TamanhoDoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (Bissexto() == true) {
            TamanhoDoMes[1] = 29;
        }

        for (int j = 1; j < DiaDaSemana(ano, mes, 1); j++)
            cout << "\t";

        for (int dia = 1; dia <= TamanhoDoMes[mes - 1]; dia++) {
            if (dia < 10)
                cout << '0' << dia << "\t";
            else
                cout << dia <<"\t";

            if (DiaDaSemana(ano, mes, dia) == 7)
                cout << "\n";
        }
    }
};

int main(int argc, char *argv[]) {
    int ano, mes, dia;
    cout << "Digite o ano: ";
    cin >> ano;
    cout << "Digite o mes: ";
    cin >> mes;
    cout << "Digite o dia: ";
    cin >> dia;

    Calendario obj(ano, mes, dia);
    obj.ImprimirCalendario();
    
    puts("");
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
