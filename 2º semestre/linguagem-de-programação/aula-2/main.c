#include <stdlib.h>
#include <stdio.h.>

int main() {
    unsigned int qntSoftware;
    float bonus;
    const float salFixo = 1250.0;

    printf("Digite a quantidade de softwares feitos pelo programador: ");
    scanf("%d", &qntSoftware);
    system("cls");

    bonus = qntSoftware * 75.0;

    printf("Salario Fixo: %.2f\n", salFixo);
    printf("Bonus recebido: %.2f\n", bonus);
    printf("Salario total: %.2f\n", bonus + salFixo);
}