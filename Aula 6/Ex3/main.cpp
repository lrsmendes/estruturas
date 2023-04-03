#include <cstdlib>
#include <iostream>

using namespace std;

int div(int num) {
    int qtn = 0; // contador de divisões
    for(int i=1; i<=num; i++) {
        if(num%i == 0) { // verifica se i é divisor de num
            qtn++; // incrementa o contador
        }
    }
    return qtn; // retorna a quantidade de divisões
}

int main(int argc, char *argv[])
{
    int num;
    cout << "Digite um numero: ";
    cin >> num;
    cout << "O numero " << num << " e divisivel " << div(num) << " vezes pelo intervalo de 1 ate ele mesmo." << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
