#include <stdlib.h>
#include <stdio.h>

float n1, n2;
int op;

void menu();
void lerNotas();
float mediaAritimetica();
float mediaPonderada();
float mediaHarmonica();

main() {
    while (1) {
        menu();
        switch(op) {
            case 1:
                printf("A media do aluno foi %.1f", mediaAritimetica());
                break;
            
            case 2:
                printf("A media do aluno foi %.1f", mediaPonderada());
                break;
            
            case 3:
                printf("A media do aluno foi %.1f", mediaHarmonica());
                break;
        }
        putchar('\n');
        system("pause");
        system("cls");
    }
}

void menu() {
    puts("\t\t - CALCULA MEDIAS -");
    puts("\t[1] Media aritimetica");
    puts("\t[2] Media ponderada");
    puts("\t[3] Media harmonica");
    puts("\t[4] Finalizar programa");
    printf("\t> ");
    scanf("%d", &op);
    return;
}

void lerNotas() {
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    return;
}

float mediaAritimetica() {
    lerNotas();
    return (n1 + n2) / 2;

}

float mediaPonderada() {
    lerNotas();
    return (n1 + n2) / 3;

}

float mediaHarmonica() {
    lerNotas();
    return 2 / ((1/n1) + (1/n2));
}