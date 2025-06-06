#include <stdio.h>

int main() {
    float peso, altura, imc;
    char condicion[20];  // Variable para guardar la condición

    // Solicita datos al usuario
    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);

    printf("Ingrese la altura en metros: ");
    scanf("%f", &altura);

    // Calcula el IMC
    imc = peso / (altura * altura);

    // Muestra el resultado
    printf("\nSu índice de masa corporal es: %.2f\n", imc);

    // Determina la condición y la guarda
    if (imc < 18.5) {
        printf("Condición: Bajo peso\n");
        snprintf(condicion, sizeof(condicion), "Bajo peso");
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("Condición: Normal\n");
        snprintf(condicion, sizeof(condicion), "Normal");
    } else if (imc >= 25.0 && imc <= 29.9) {
        printf("Condición: Sobrepeso\n");
        snprintf(condicion, sizeof(condicion), "Sobrepeso");
    } else {
        printf("Condición: Obesidad\n");
        snprintf(condicion, sizeof(condicion), "Obesidad");
    }

    // Tabla de referencia
    printf("\nÍndice | Condición\n");
    printf("-----------------------------\n");
    printf("<18.5        | Bajo peso\n");
    printf("18.5 a 24.9  | Normal\n");
    printf("25.0 a 29.9  | Sobrepeso\n");
    printf(">=30.0       | Obesidad\n");

    // Resultado final bajo tabla
    printf("\nSegún la tabla, usted se encuentra en la condición: %s\n", condicion);

    return 0;
}
