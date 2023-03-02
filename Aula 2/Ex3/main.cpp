#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    char vet[10];
    int cont;
    
    cout << "Quantos caracteres tem a sua palavra?\n>";
    cin >> cont;
    
    for (int i = 0; i < cont; i++){
        cout << "Digite cada l e t r a  da palavra: ";
        cin >> vet[i];
    }
    
    cout << endl;
    
    for (int i = cont - 1; i >=0; i--){
        cout << vet[i];
    }
    
    cout << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
