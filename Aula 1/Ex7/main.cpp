#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int ano;

    cout << "Informe um ano: ";
    cin >> ano;
    cout << endl;

    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        cout << ano << " � um ano bissexto" << endl;
    } else {
        cout << ano << " n�o � um ano bissexto" << endl;
    }    
    
    cout << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
