#include <cstdlib>
#include <iostream>

using namespace std;

int fat(int n)
{
    if (n == 0) {
        return 1;
    } else {
        return n * fat(n - 1);
    }
}

int main(int argc, char *argv[])
{
    int num;
    
    cout << "Digite um n�mero: ";
    cin >> num;
    
    if (num < 0){
            puts("\nFatorial menor que 0 n�o existe.\n");
            system("PAUSE");
            exit(0);
    }
    
    cout << "\nO seu fatorial � de: " << fat(num) << endl << endl; 
    system("PAUSE");
    return EXIT_SUCCESS;
}
