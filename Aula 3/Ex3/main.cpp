#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int matriz[2][3] = {{0, 0, 0}, {0, 0, 0}};
    
    int transposta[3][2];
    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cin >> matriz[i][j]; //entrada
        }
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            transposta[j][i] = matriz[i][j]; //converte linxcol para colxlin
        }
    }
    
    cout << endl;
    
    cout << "Matriz original:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " "; 
        }
        cout << endl;
    }
    
    cout << endl;
    
    cout << "Matriz transposta:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << endl;    

    system("PAUSE");
    return EXIT_SUCCESS;
}
