// Link al repositorio: https://github.com/FacuOvy/tp_info1_1R1_Facundo_Oviedo/blob/main/bmi.c‬.c

#include <stdio.h>

int main() {
    float peso, altura, imc;
    char condicion[20];

    // Validar peso
    do {
        printf("Ingrese el peso en kg: ");
        scanf("%f", &peso);
        if (peso <= 0) {
            printf("Error: el peso debe ser un valor positivo.\n");
        }
    } while (peso <= 0);

    // Validar altura
    do {
        printf("Ingrese la altura en metros: ");
        scanf("%f", &altura);
        if (altura <= 0) {
            printf("Error: la altura debe ser un valor positivo.\n");
        }
    } while (altura <= 0);

    // Calcular IMC
    imc = peso / (altura * altura);
    printf("\nSu índice de masa corporal es: %.2f\n", imc);

    // Determinar condición
    if (imc < 18.5) {
        printf("Condición: Bajo peso\n");
        snprintf(condicion, sizeof(condicion), "Bajo peso");
    } else if (imc <= 24.9) {
        printf("Condición: Normal\n");
        snprintf(condicion, sizeof(condicion), "Normal");
    } else if (imc <= 29.9) {
        printf("Condición: Sobrepeso\n");
        snprintf(condicion, sizeof(condicion), "Sobrepeso");
    } else {
        printf("Condición: Obesidad\n");
        snprintf(condicion, sizeof(condicion), "Obesidad");
    }

    // Tabla
    printf("\nÍndice | Condición\n");
    printf("-----------------------------\n");
    printf("<18.5        | Bajo peso\n");
    printf("18.5 a 24.9  | Normal\n");
    printf("25.0 a 29.9  | Sobrepeso\n");
    printf(">=30.0       | Obesidad\n");

    // Condición final
    printf("\nSegún la tabla, usted se encuentra en la condición: %s\n", condicion);

    return 0;
}
