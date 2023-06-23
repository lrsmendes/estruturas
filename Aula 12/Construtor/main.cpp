#include <cstdlib>
#include <iostream>

using namespace std;

class Pessoa {
      private:
              string nome; 
              int idade;
              
      public:
             Pessoa(string n, int i){
                           nome = n;
                           idade = i;
                           cout << "Construindo objeto Pessoa com nome " << nome << " e idade " << idade << endl;
             }
             
      void apresentar() {
           cout << "Ola, meu nome e " << nome << " e tenho " << idade << " anos." << endl;
      }
};

int main(int argc, char *argv[]) {
    Pessoa obj("Lucas", 18);
    obj.apresentar();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
