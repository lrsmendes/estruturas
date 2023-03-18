#include <cstdlib>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) 
{
  int vet[8];
  
  for (int i = 0; i < 8; i++) {
      cin >> vet[i];
  }
  
  int tam = sizeof(vet) / sizeof(vet[0]);

  sort(vet, vet + tam);

  for (int i = 0; i < tam; i++) {
    cout << vet[i] << " ";
  }
  
  cout << endl;
  
    system("PAUSE");
    return 0;
}
