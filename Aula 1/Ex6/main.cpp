#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int idade;

    cout << "Informe a idade da pessoa: ";
    cin >> idade;
    cout << endl;

    if (idade >= 0 && idade <= 11) {
        cout << "Criança" << endl;
    } else if (idade >= 12 && idade <= 17) {
        cout << "Adolescente" << endl;
    } else if (idade >= 18 && idade <= 49) {
        cout << "Adulto" << endl;
    } else {
        cout << "Idoso" << endl;
    }
    
    cout << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
