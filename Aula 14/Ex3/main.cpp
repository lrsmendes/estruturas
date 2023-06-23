/*
Faça um método que peça 2 (dois) números inteiros, e mostre no vídeo todos os números ímpares entre eles (incluindo-os). 

Os dois valores podem ser informados em qualquer ordem, devendo o programa trata-los de forma adequada.

Obs. Os parâmetros do método deve ser dois ponteiros de inteiros. Manipule-os corretamente dentro do método
*/

#include <cstdlib>
#include <iostream>

using namespace std;

void mostrarNumerosImpares(int *num1, int *num2) {
    if (num1 == 0 || num2 == 0) {
        cout << "Os ponteiros nao podem valer zero." << endl;
        return;
    }

    if (*num1 == *num2) {
        if (*num1 % 2 != 0) {
            cout << *num1 << endl;
        } else {
            cout << "Nao existem numeros impares entre eles." << endl;
        }
        return;
    }

    // Caso os valores sejam informados em ordens diferentes,
    // reordena-os corretamente
    if (*num1 > *num2) {
        int temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }

    cout << "Numeros impares entre " << *num1 << " e " << *num2 << ": ";
    for (int i = *num1; i <= *num2; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
        }
    }
    puts("");
}

int main(int argc, char *argv[]) {
    int num1, num2;

    cout << "Digite o primeiro numero: ";
    cin >> num1;

    cout << "Digite o segundo nuero: ";
    cin >> num2;

    mostrarNumerosImpares(&num1, &num2);

    system("PAUSE");
    return EXIT_SUCCESS;
}
