// Raziel.cpp : Este arquivo cont�m a fun��o 'main'. A execu��o do programa come�a e termina ali.
// REFAZER COM SUBPROGRAMAS!

#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");
    double P1, P2, T1, T2, media;
    int CASO;

    printf("(c)Raziel, 2022\nPortado por Lucas Raziel 2023 para C++\n\n");

COMECO:
    printf("1 - Economia e Finan�as (Frederico)\n");
    printf("2 - Sociedade e Tecnologia (Marcelo)\n");
	printf("3 - Estruturas de Dados (Fernanda)\n");
	printf("4 - Engenharia de Software II (Simone)\n");
	printf("5 - Intera��o Humano Computador (F�bio)\n");
	printf("6 - Estat�stica Aplicada (S�vio)");
    printf("\nOpc�o: ");

    scanf("%d", &CASO);

    printf("\n");

    switch (CASO) {
    
    case 1:
N1:
        printf("P1: ");
        cin >> P1;

        printf("P2: ");
        cin >> P2;

        printf("TR: ");
        cin >> T1;

        media = (P1 + P2 + T1) / 3;
        cout.precision(2);
        cout << "\nSua m�dia � de: " << media << std::endl; //imprimir em formato decimal

        if (media < 6) {
            printf("\nSE FUDEU!\n");
        }

        break;

    case 2:
        goto N1; //o calculo � o mesmo
        
        break;

	case 3:
		goto N1;

		break;

	case 4:
		goto N1;

		break;

	case 5:
		printf("N�o implementado.\n");
		goto COMECO;

		break;

	case 6:
		printf("P1: ");
		cin >> P1;

		printf("P2: ");
		cin >> P2;

		printf("NP: ");
		cin >> T1;

		media = (7 * P1 + 7 * P2 + 6 * T1) / 20;
		cout.precision(2);
		cout << "\nSua m�dia � de: " << media << std::endl; //imprimir em formato decimal

		if (media < 6) {
			printf("\nSE FUDEU!\n");
			}

		break;

    default:
        cout << "Op��o invalida!\n";
        goto COMECO;
    }

	cout << "Voc� quer terminar o programa? (S/N)" << endl;
	char escolha;
	cin >> escolha;

	if (escolha = 'N'){
		printf("\n");
		goto COMECO;
	}

    system("pause");
}