#include <stdio.h>

int main() {
    int cantidad_estudiantes;
    float calificacion, suma = 0;
    float max = 0, min = 100;

    // a) Validar que la cantidad de estudiantes sea positiva
    do {
        printf("Ingrese la cantidad de estudiantes: ");
        scanf("%d", &cantidad_estudiantes);

        if (cantidad_estudiantes <= 0) {
            printf("Error: la cantidad debe ser un número positivo.\n");
        }
    } while (cantidad_estudiantes <= 0);

    // b) Solicitar las calificaciones
    for (int i = 1; i <= cantidad_estudiantes; i++) {
        // c) Validar calificación entre 0 y 100
        do {
            printf("Ingrese la calificación del estudiante %d: ", i);
            scanf("%f", &calificacion);

            if (calificacion < 0 || calificacion > 100) {
                printf("Error: la calificación debe estar entre 0 y 100.\n");
            }
        } while (calificacion < 0 || calificacion > 100);

        suma += calificacion;

        // d) Actualizar mayor y menor
        if (calificacion > max) {
            max = calificacion;
        }
        if (calificacion < min) {
            min = calificacion;
        }
    }

    // e) Calcular promedio
    float promedio = suma / cantidad_estudiantes;

    // f) Mostrar resultados
    printf("\nPromedio de calificaciones: %.2f\n", promedio);
    printf("Calificación más alta: %.2f\n", max);
    printf("Calificación más baja: %.2f\n", min);

    return 0;
}

