#include <cstdlib>
#include <iostream>

using namespace std;

class FilaDeArray
{
      private:
             int *VET;
             int ProximaPosicaoLivre;
             int MAX;
      public:
             FilaDeArray(int qtde)
             {
                 MAX = qtde;
                 VET = new int[MAX];
                 ProximaPosicaoLivre = 0;
             }
             void Enfilera(int n)
             {
                  if(ProximaPosicaoLivre < MAX) 
			VET[ProximaPosicaoLivre++] = n;
             }
             void Mostra()
             {
                  for(int i = 0; i<ProximaPosicaoLivre; i++)
                  {
                          cout <<VET[i] <<"\n";
                  }
             }
             int Desenfilera()
             {
                  if(ProximaPosicaoLivre > 0){
                          int valorDesenfileirado = VET[0];         
                          for (int i = 0; i < ProximaPosicaoLivre - 1; i++){
                              VET[i] = VET[i + 1];
                          } 
                          ProximaPosicaoLivre--;
                          return valorDesenfileirado;
                  }
			
             }
};

int main(int argc, char *argv[])
{
    FilaDeArray fila(50);
    fila.Enfilera(3);
    fila.Enfilera(5);
    fila.Enfilera(7);
    fila.Enfilera(1);
    fila.Mostra();
    cout <<"\Desenfilera " <<fila.Desenfilera() <<".\n\n";
    cout <<"\Desenfilera " <<fila.Desenfilera() <<".\n\n";
    fila.Mostra();
    system("PAUSE");
    return EXIT_SUCCESS;
}
