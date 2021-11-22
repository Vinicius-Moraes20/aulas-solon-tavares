#include <stdlib.h>
#include <stdio.h.>

void funcAB(int n1, int n2);
void funcBC(int n1, int n2);
void funcAD(int n1, int n2);
void funcCA(int n1, int n2);
void imprimir();

int AB, BC, AD, CA;

main () {
    int A, B, C, D;
    printf("Digite o primeiro valor: ");
    scanf("%d", &A);
    printf("Digite o segundo valor: ");
    scanf("%d", &B);
    printf("Digite o terceiro valor: ");
    scanf("%d", &C);
    printf("Digite o quarto valor: ");
    scanf("%d", &D);

    funcAB(A, B);
    funcBC(B, C);
    funcAD(A, D);
    funcCA(C, A);

    imprimir();
}

void funcAB(int n1, int n2) {
    AB = n1 + n2;
}

void funcBC(int n1, int n2) {
    BC = n1 - n2;
}

void funcAD(int n1, int n2) {
    AD = n1 * n2;
}

void funcCA(int n1, int n2) {
    CA = n1 / n2;
}

void imprimir() {
    printf("A por B: %d\n", AB);
    printf("B por C: %d\n", BC);
    printf("A por D: %d\n", AD);
    printf("C por A: %d\n", CA);
}