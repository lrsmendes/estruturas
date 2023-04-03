#include <cstdlib>
#include <iostream>

using namespace std;

int fatorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return n * fatorial(n - 1); //é excepcional
  }
}

int main(int argc, char *argv[])
{
    int num;
    cin >> num;
    puts("");
    cout << "!" << num << " = "<< fatorial(num) << endl << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
