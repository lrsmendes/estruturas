/*
Escreva um programa que solicite ao usu�rio quatro n�meros e mostre na tela o maior, o menor e a m�dia aritm�tica dos n�meros digitados. 
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    double n1, n2, n3, n4;
    double mai, men, med;
    
    cin >> n1 >> n2 >> n3 >> n4;

    mai = n1;
    if (n2 > mai) mai = n2;
    if (n3 > mai) mai = n3;
    if (n4 > mai) mai = n4;

    men = n1;
    if (n2 < men) men = n2;
    if (n3 < men) men = n3;
    if (n4 < men) men = n4;

    med = n1 + n2 + n3 + n4;
    
    puts("");

    cout << "Maior n�mero: " << mai << endl;
    cout << "Menor n�mero: " << men << endl;
    cout << "M�dia: " << med / 4 << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
