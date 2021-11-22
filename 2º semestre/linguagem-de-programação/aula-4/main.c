#include <stdlib.h>
#include <stdio.h>

int main() {
    float valProduto, cotacao;

    putchar('\n');
    puts("               Conversor de Moeda");
    puts("------------------------------------------------");
    printf("Informe o valor do produto: $");
    scanf("%f", &valProduto);
    printf("Informe a cotacao do dolar em Real: R$");
    scanf("%f", &cotacao);

    printf("\n\nValor pago em Dolar: $%.2f\n", valProduto); 
    printf("Valor do produto em real: R$%.2f\n\n", valProduto * cotacao);
    system("Pause");
}