#include <cstdlib>
#include <iostream>

using namespace std;

class obj {
  public:
	int largura, altura;
	
    obj(int w, int h) {
      largura = w;
      altura = h;
    }

    int area() {
      return largura * altura;
    }

    void display() {
      cout << "Largura: " << largura << "\nAltura: " << altura << endl;
    }
};

int main(int argc, char *argv[]) {
    int l, a;
    cout << "Escreva a largura do retangulo: ";
    cin >> l;
    
    cout << "Agora escreva a altura do retangulo: ";
    cin >> a;
    puts("");
    
    obj r(l, a);
    r.display();
    cout << "\nArea: " << r.area() << endl << endl;
  
    system("PAUSE");
    return EXIT_SUCCESS;
}
