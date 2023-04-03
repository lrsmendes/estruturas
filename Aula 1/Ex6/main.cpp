/*
Escreva um programa que solicite ao usuário a idade de uma pessoa e informe se essa pessoa é criança (0 a 11 anos)... 
...adolescente (12 a 17 anos), adulta (18 a 49 anos) ou idosa (a partir de 50 anos).  
*/

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int idade;
    cin >> idade;
    
    if (idade >= 0 && idade < 12){
              cout << "CRIANÇA";
    }
    
    if (idade > 11 && idade < 18){
              cout << "ADOLESCENTE";
    }
    
    if (idade > 17 && idade < 50) {
              cout << "ADULTA";
    }
    
    if (idade > 49) {
              cout << "IDOSA";
    }
    
    puts("");
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
