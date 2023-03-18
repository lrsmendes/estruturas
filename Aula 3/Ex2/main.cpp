#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int A[3][5];
    int Soma_Linha[3] = {0,0,0};
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            cin >> A[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            Soma_Linha[i] += A[i][j];
        }
    }
    
    cout << endl;
    
    cout << "Soma: " << endl << endl;
    for (int i = 0; i < 3; i++){
        cout << "\t"<< Soma_Linha[i] << endl;
    }
    
    cout << endl << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
