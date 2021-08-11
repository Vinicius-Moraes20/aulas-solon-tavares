#include <stdio.h>
#include <stdlib.h>

#define  triangulo(b, a) ((b) * (a)) / (2)

main() {
    float  base, altura; 

    puts("----------- Calculo de area do trinagulo -----------");
    printf("Digite o valor da base do trinagulo: ");
    scanf("%f", &base);

    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);
	putchar('\n');
	
    printf("A area do triangulo e %.2f\n", triangulo(base, altura));
    
    system("pause");
    return 0;
}
