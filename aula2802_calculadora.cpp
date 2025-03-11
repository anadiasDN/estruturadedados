#include <stdio.h>

void somar(float *a, float *b, float *resultado) {
    *resultado = *a + *b;
}

void subtrair(float *a, float *b, float *resultado) {
    *resultado = *a - *b;
}

void multiplicar(float *a, float *b, float *resultado) {
    *resultado = *a * *b;
}

void dividir(float *a, float *b, float *resultado) {
     
    *resultado = *a / *b;
} 


int main() {
    float valor1, valor2, resultado;
    int opcao;

    printf("Calculadora\n");
    printf("Escolha uma operação:\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);

    switch (opcao) {
        case 1:
            somar(&valor1, &valor2, &resultado);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            subtrair(&valor1, &valor2, &resultado);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            multiplicar(&valor1, &valor2, &resultado);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            dividir(&valor1, &valor2, &resultado);
            if (valor2 != 0) {
                printf("Resultado: %.2f\n", resultado);
            }
            break;
        default:
            printf("Opção inválida!\n");
    }

    return 0;
}

