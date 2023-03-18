#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int mat[5][5];
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> mat[i][j];
        }
    }
    cout << endl;
    
    cout << "Matriz completa: " << endl;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout << mat[i][j] << "\t";
        }
        
    cout << endl;
    }
   
    
    cout << "Matriz impar: " << endl;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if ((i+j) % 2 != 0) {
                          cout << mat[i][j] << "\t";
            }
        }
        cout << endl;
    }
    cout << endl << endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
