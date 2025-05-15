#include <stdio.h>

int main() {
    float peso, altura, imc;

    // Solicita datos al usuario
    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);

    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);

    // Calcula el IMC
    imc = peso / (altura * altura);

    // Muestra el resultado
    printf("\nSu índice de masa corporal es: %.2f\n", imc);

    // Determina y muestra la condición
    printf("Condición: ");
    if (imc < 18.5) {
        printf("Bajo peso\n");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Normal\n");
    } else if (imc >= 25.0 && imc <= 29.9) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidad\n");
    }

    // Tabla de referencia
    printf("\nÍndice | Condición\n");
    printf("-----------------------------\n");
    printf("<18.5        | Bajo peso\n");
    printf("18.5 a 24.9  | Normal\n");
    printf("25.0 a 29.9  | Sobrepeso\n");
    printf(">=30.0       | Obesidad\n");

    return 0;
}
