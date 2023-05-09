/*
Crie uma classe chamada Triangulo onde crie variáveis da classe, os métodos que são 2, o primeiro é para ver se é triangulo e o segundo é para ver que tipo de triangulo é, os três abaixo:

Escaleno – os 3 lados diferentes

Isósceles – 2 lados iguais

Eqüilátero – os 3 lados iguais

Obs. Não esquecer de verificar primeiramente se é triangulo
*/

#include <cstdlib>
#include <iostream>

using namespace std;

class mat {
public:
    int A, B, C;

    void entrada(int a, int b, int c) {
        A = a;
        B = b;
        C = c;
    }

    bool ehTriangulo() {
        if (A + B > C && A + C > B && B + C > A) {
            return true;
        } else {
            return false;
        }
    }

    void triangulo() {
         if (ehTriangulo() == true) {
            cout << "E TRIANGULO" << endl;   
            if (A != B && B != C && A != C) {
                cout << "ESCALENO" << endl;
            } else if (A == B || B == C || A == C) {
                cout << "ISOSCELES" << endl;
            } else if (A == B && B == C) {
                cout << "EQUILATERO" << endl;
            }
         } else {
            cout << "NAO E TRIANGULO" << endl;
         }
    }
};

int main(int argc, char *argv[]) {
    int i, j, k;

    cin >> i >> j >> k;

    mat obj;

    obj.entrada(i, j, k);
    obj.triangulo();

    system("PAUSE");
    return EXIT_SUCCESS;
}

