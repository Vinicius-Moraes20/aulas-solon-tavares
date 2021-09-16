#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void menu();
void parImpar();
void igualdade();

int op;
int n1, n2, n3;

int main() {
	setlocale(LC_ALL, "Portuguese");
    menu();
    
    return 0;
}

void menu() {
    printf("\n\t\t\t - MENU DE OPÇÕES - \n\n");
    printf("   1 - VERIFICAR SE O NUMERO E PAR OU IMPAR.\n");
    printf("   2 - VERIFICAR SE OS NUMEROS SÃO DIFERENTES OU APRESENTAM ALGUMA IGUALDADE.\n   >");
    scanf("%d", &op);
    putchar('\n');
    
    switch (op) {
        case 1:
            parImpar();
            break;

        case 2:
            igualdade();
            break;
        
        case 0:
        	system("pause");
            exit(1);
            break;
            
        default:
            system("cls");
            printf("   :( OPÇÃO INVALIDA :(");
            menu();
            break;
    }

}

void parImpar() {
    printf("   DIGITE O NUMERO: ");
    scanf("%d", &n1);

    if (n1 != 0) {
        if ((n1 % 2) == 0) {
            printf("   NUMERO PAR!\n");
        } else {
            printf("   NUMERO IMPAR!\n");
        }
    } else {
        printf("   NUMERO INVALIDO, POR FAVOR, DIGITE UM NUMERO DIFERENTE DE ZERO!");
    }
    
}

void igualdade() {
    printf("   DIGITE O PRIMERIO NUMERO: ");
    scanf("%d", &n1);

    printf("   DIGITE O SEGUNDO NUMERO: ");
    scanf("%d", &n2);

    printf("   DIGITE O TERCEIRO NUMERO: ");
    scanf("%d", &n3);

    if ((n1 != n2) && (n1 != n3) && (n2 != n3)) {
        printf("OS NUMEROS NÃO TEM NENHUMA IGUALDADE!"); 
    } else {
        printf("HA UMA IGUALDADE ENTRE OS NUMEROS!");
    }
}
