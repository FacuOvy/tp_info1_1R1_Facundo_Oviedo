#include <stdio.h>

int main() {
    int nota;

    printf("Ingrese la nota final: ");
    scanf("%d", &nota);

    printf("Nota: %d\n", nota);

    // Tabla de condiciones
    if (nota >= 90) {
        printf("Calificación: A\nCondición: Promociona\n");
    } else if (nota >= 80) {
        printf("Calificación: B\nCondición: Regular\n");
    } else if (nota >= 60) {
        printf("Calificación: C o D\nCondición: Regular\n");
    } else {
        printf("Calificación: F\nCondición: Libre\n");
    }

    return 0;
}
