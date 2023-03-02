#include <cstdlib>
#include <iostream>
#include <locale.h>

using namespace std;

void raziel(long *v1, long *v2);
long fat(long n);

int main(int argc, char *argv[])
{   setlocale(LC_ALL, "Portuguese");
    printf("(c)Raziel, 2023\n");
    
    long v[10];
    
    for (int i = 0; i < 10; i++){
        printf(">");
        cin >> v[i];     
    }
    
    long w[10];
    
    for (int i = 0; i < 10; i++){
        w[i] = v[i];
    }
    
    raziel(v, w);
    
    printf("\nFatorial:\n");
    
    for (int i = 0; i < 10; i++) {
        printf("w[%d]: %ld\n", i, w[i]);
    }
    
    system("PAUSE");
    return 0;
}

long fat(long n) {
    return n < 2 ? 1 : n * fat(n - 1);
}

void raziel(long *v1, long *v2) {

    short i;

    for (i = 0; i < 10; i++) {
        v2[i] = fat(v1[i]);
    }
}
