#include <stdlib.h>
#include <stdio.h>

float calcTriangulo(float b, float h);


int main() {
    float base, altura, area;

    printf("Digite o tamanho da base do triangulo: ");
    scanf("%f", &base);
    printf("Digite o tamanho da altura do triangulo: ");
    scanf("%f", &altura);

    printf("A area do triangulo e de %.2f", calcTriangulo(base, altura));

}

float calcTriangulo(float b, float h) {
    return (b * h) / 2;
}