#include <stdio.h>
#define TAM 5   

int main() {
    int codigos[TAM];
    float precios[TAM];
    int i;

    printf("Ingrese %d productos, se pedirá el código y el precio:\n", TAM);

    for (i = 0; i < TAM; i++) {
        do {
            printf("Ingrese el codigo de barras (1-999999999): ");
            scanf("%d", &codigos[i]);
            if (codigos[i] < 1 || codigos[i] > 999999999) {
                printf("Error. El codigo de barras debe estar entre 1 y 999999999\n");
            }
        } while (codigos[i] < 1 || codigos[i] > 999999999);

        do {
            printf("Ingrese el precio: ");
            scanf("%f", &precios[i]);
            if (precios[i] < 0) {
                printf("Error. El precio no puede ser negativo\n");
            }
        } while (precios[i] < 0);
    }

    printf("\nCodigo\t\tPrecio\n");
    for (i = 0; i < TAM; i++) {
        printf("%d\t\t%.2f\n", codigos[i], precios[i]);
    }

    float maxPrecio = precios[0];
    float minPrecio = precios[0];
    int codMax = codigos[0];
    int codMin = codigos[0];

    for (i = 1; i < TAM; i++) {
        if (precios[i] > maxPrecio) {
            maxPrecio = precios[i];
            codMax = codigos[i];
        }
        if (precios[i] < minPrecio) {
            minPrecio = precios[i];
            codMin = codigos[i];
        }
    }

    printf("\nMas caro: [%d] %.2f\n", codMax, maxPrecio);
    printf("Mas barato: [%d] %.2f\n", codMin, minPrecio);

    return 0;
}
