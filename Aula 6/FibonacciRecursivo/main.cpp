#include <cstdlib>
#include <iostream>

using namespace std;

int fib(int n) {
    if (n <= 2) {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main(int argc, char *argv[]) {
    int x;
    cin >> x;

    cout << "Fibonacci de " << x << ": " << fib(x) << endl << endl;

    cout << "Serie de Fibonacci ate " << x << ":" << endl;
    for (int i = 1; i <= x; i++) {
        cout << fib(i) << " ";
    }
    puts("\n");
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

