#include <stdio.h>
#include <stdlib.h>


void menu();
void op_1();
void op_2();
void op_3();
void op_4();

int opMenu;


main() {   
    do {
        menu();
        switch(opMenu) {
            case 0:
                printf("Programa finalizado!\n");
                system("pause");
                return 0;
                break;
        
            case 1:
                op_1();
                break;

            case 2: 
                op_2();
                break;
        
            case 3:
                op_3();
                break;
        
            case 4:
                op_4();
                break;
        
            default:
                printf("Opcao invalida, tente novamente!\n");
                system("pause");
                break;
        }
    } while (opMenu != 0);
}

void menu() {
    system("cls");
    puts("------------------------- Trabalho Avaliativo -------------------------");
    puts("[1] Calcular indice de massa corporal (IMC) de uma pessoa");
    puts("[2] Calcula a media aritimetica de um aluno a partir de duas notas");
    puts("[3] Gerar e somar os numeros pares de um intervalo de valores");
    puts("[4] Calcular a tabuada de um nuermo digitado pelo usuario de 1 a 10");
    puts("[0] Finaliar o programa");
    printf("Qual opcao deseja executar (1, 2, 3, 4 ou 0)? ");
    scanf("%d", &opMenu);
    return;
}

void op_1() {
    char nome[40];
    int idade;
    float altura, peso, IMC;

    system("cls");
    puts("\n[1] Calcular indice de massa corporal (IMC) de uma pessoa");
    printf("Digite seu nome: ");
    scanf("%s", nome);                //fiz usando scanf por que não sei por que cargas d'agua a gets não está funcionando nesta parte do código
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite sua altura (m): ");
    scanf("%f", &altura);
    printf("Digite seu peso (kg): ");
    scanf("%f", &peso);

    IMC = peso / (altura * altura);

    system("cls");
    printf("Bom dia %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("IMC: %.1f\tFaixa de peso: ", IMC);

    if (IMC < 18.5) {
        printf("Magreza");
    } else if ((IMC >= 18.5) && (IMC <= 24.9)) {
        printf("Normal");
    } else if ((IMC >= 25) && (IMC <= 29.9)) {
        printf("Sobrepeso");
    } else if ((IMC >= 30) && (IMC <= 39.9)) {
        printf("Obesidade");
    } else {
        printf("Obesidade grave");
    }
    puts("\n\n");
    system("pause");


}

void op_2() {
    float n1 = -1, n2 = -1, media;

    system("cls");
    puts("\n[2] Calcula a media aritimetica de um aluno a partir de duas notas");
    while ((n1 < 0) || (n1 > 10)) {
        printf("Digite a primeira nota: ");
        scanf("%f", &n1);
        if ((n1 < 0) || (n1 > 10)) puts("Erro! Digite a nota novamente");
    }
    puts("--------------------------------------------------------------");

    while ((n2 < 0) || (n2 > 10)) {
        printf("Digite a segunda nota: ");
        scanf("%f", &n2);
        if ((n2 < 0) || (n2 > 10)) puts("Erro! Digite a nota novamente");
    }

    media = (n1 + n2) / 2;

    if (media >= 7) {
        printf("Aprovado! media de %.2f", media);
    } else {
        printf("Reprovado! media de %.2f faltou %.2f ponto(s) para ser aprovado", media, 7 - media);
    }
    puts("\n\n");
    system("pause");

}
    
    

void op_3() {
    int n1, n2, n3, acc = 0;

    system("cls");
    puts("\n[3] Gerar e somar os numeros pares de um intervalo de valores");

    printf("Digite o primeiro numro: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);

    if (n1 > n2) {
        n3 = n1;
        n1 = n2;
        n2 = n3;
    }

    for (int x = n1; x <= n2; x++) {
        if (x % 2 == 0) {
            acc += x;
        }
    }

    printf("O somatorio de todos os numeros pares do intervalo de %d a %d e %d\n\n", n1, n2, acc);
    system("pause");
}

void op_4() {
    int n, i = 1, mul;

    system("cls");
    puts("\t[4] Calcular a tabuada de um numero digitado pelo usuario de 1 a 10");
    printf("Digite o numero que voce deseja verificar a tabuada: ");
    scanf("%d", &n);

    do {
        mul = n * i;
        printf("%d X %d = %d\n", n, i, mul);
        i++;
    } while (i <= 10);

    puts("\n\n");
    system("pause");
}