#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int vet[4][4];
    double soma = 0;
    
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cin >> vet[i][j];
            if (i == j){
                  soma += vet[i][j];
            }
        }
    }
    
    cout << endl;
    cout << "Soma: " << soma << endl << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
