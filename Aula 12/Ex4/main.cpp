/*
Crie uma classe Aluno contendo seu nome, número de matrícula e telefone.

a) Crie dois construtores, um iniciando valores “vazios” e outro iniciando valores dados pelo teclado.

b) Faça um método que imprima dados de dois alunos simultâneamente.
*/

#include <cstdlib>
#include <iostream>

using namespace std;

class Aluno {
      string nome, matricula, telefone;
              
      public:
             Aluno(){
                     nome = " ";
                     matricula = " ";
                     telefone = " ";
             }
             
             Aluno(string nom, string mat, string tel){
                          nome = nom;
                          matricula = mat;
                          telefone = tel;
             }
             
      void imprimeAluno(Aluno a1, Aluno a2){
           cout << "Dados do Aluno 1:" << endl;
           cout << "Nome: " << a1.nome << endl;
           cout << "Matricula: " << a1.matricula << endl;
           cout << "Telefone: " << a1.telefone << endl;
            
           cout << endl;
           
           cout << "Dados do Aluno 2:" << endl;
           cout << "Nome: " << a2.nome << endl;
           cout << "Matricula: " << a2.matricula << endl;
           cout << "Telefone: " << a2.telefone << endl;
      }
};

int main(int argc, char *argv[])
{
    Aluno obj1;
    Aluno obj2;
    
    string nome1, nome2, matricula1, matricula2, telefone1, telefone2;
    
    cout << "Digite o nome do Aluno 1: ";
    cin >> nome1;
    cout << "Digite a matricula do Aluno 1: ";
    cin >> matricula1;
    cout << "Digite o telefone do Aluno 1: ";
    cin >> telefone1;
    
    cin.ignore();
    cout << endl;
    
    cout << "Digite o nome do Aluno 2: ";
    cin >> nome2;
    cout << "Digite a matricula do Aluno 2: ";
    cin >> matricula2;
    cout << "Digite o telefone do Aluno 2: ";
    cin >> telefone2;
    
    cout << endl;
    
    Aluno a1(nome1, matricula1, telefone1);
    Aluno a2(nome2, matricula2, telefone2);
    
    obj1.imprimeAluno(a1, a2);
        
    system("PAUSE");
    return EXIT_SUCCESS;
}
