#include <stdlib.h>
#include <stdio.h>

void menu();
void multiplo_tres();
void divisivel_cinco();
void par_impar();
void positivo_negativo();
void intervalo();

int n = 0, opMenu;


main() {
    menu();
    if ((opMenu >= 1) && (opMenu <= 5)) {
        printf("\nDigite o numero em que voce deseja verificar: ");
        scanf("%d", &n);

        switch(opMenu) {
            case 1:
                multiplo_tres();
                break;
            case 2:
            divisivel_cinco();
            break;

        case 3:
            par_impar();
            break;

        case 4:
            positivo_negativo();
            break;

        case 5:
            intervalo();
            break;

        

        }
    }
    
}


void menu() {

    puts("\n\t             Sistema de verificacao de numeros");
    puts("\t-----------------------------------------------------------");
    putchar('\n');
    puts("\t1 - Verifica se o numero e multiplo de 3");
    puts("\t2 - Verifica se o numero e divisivel por 5");
    puts("\t3 - Verifica se o numero e par ou impar");
    puts("\t4 - Verifica se o numero e negativo");
    puts("\t5 - Verifica se o numero esta no intervalo de 10 a 56");
    printf("\t> ");
    scanf("%d", &opMenu);
}

void multiplo_tres() {
    if (n % 3 == 0) {
        puts("Este numero e multiplo de 3");
    } else {
        puts("Este numero nao e multiplo de 3");
    }
    return 0;
}

void divisivel_cinco() {
    if (n % 5 == 0) {
        puts("Este numero e divisivel por 5");
    } else {
        puts("Este numero nao e divisivel por 5");
    }
    return 0;
}

void par_impar() {
    if (n % 2 == 0) {
        printf("Este numero e PAR");
    } else {
        printf("Este numero e IMPAR");
    }
    return 0;
}

void positivo_negativo() {
    if (n < 0) {
        puts("Este numero e negativo");
    } else if (n > 0) {
        puts("Este numero e positivo");
    } else {
        puts("O 0 e um numero neutro");
    }
    return 0;
}

void intervalo() {
    if ((n >= 10) && (n <= 60)) {
        puts("O numero esta no intervalo de 10 a 60"); 
    } else {
        puts("O numero nao esta no intervalo de 10 a 60");
    }
    return 0;
}