#include <stdio.h>
#include <stdlib.h>

#define TAM 20

int cantidad_piezas(int);
int es_rectificable(float, float);
int es_rechazada(float, float);
void cargar_piezas(float *, int);
int contar_piezas(int (*)(float, float), float, float *, int);
float* reservar_espacio(int);
void separar_piezas(int (*)(float, float), float, float *, int, float *);
void mostrar_resultados(char *, float *, int);

int main (void) {

    float diametros[TAM] = {0};
    int cantidad;
    float maximo = 12;
    float minimo = 10;

    cantidad = cantidad_piezas(TAM);
    cargar_piezas(diametros, cantidad);

    int cant_rectificables = contar_piezas(es_rectificable, maximo, diametros, cantidad);
    float *p_rectificables = reservar_espacio(cant_rectificables);
    separar_piezas(es_rectificable, maximo, diametros, cantidad, p_rectificables);

    int cant_rechazadas = contar_piezas(es_rechazada, minimo, diametros, cantidad);
    float *p_rechazadas = reservar_espacio(cant_rechazadas);
    separar_piezas(es_rechazada, minimo, diametros, cantidad, p_rechazadas);

    mostrar_resultados("rectificables", p_rectificables, cant_rectificables);
    mostrar_resultados("rechazadas", p_rechazadas, cant_rechazadas);

    free(p_rectificables);
    free(p_rechazadas);

    return 0;
}

int cantidad_piezas(int maximo) {
    int n;
    do {
        printf("Cuantas piezas ingresara? ");
        scanf("%d", &n);
    } while (n < 0 || n > maximo);
    return n;
}

int es_rectificable(float diametro, float valor) {
    if (diametro > valor)
        return 1;
    else
        return 0;
}

int es_rechazada(float diametro, float valor) {
    if (diametro < valor)
        return 1;
    else
        return 0;
}

void cargar_piezas(float *p, int n) {
    float valor;
    for (int i = 0; i < n; i++) {
        do {
            printf("Ingrese diametro de la pieza %d: ", i);
            scanf("%f", &valor);
            if (valor <= 0)
                printf("Valor invalido, ingrese nuevamente.\n");
        } while (valor <= 0);
        *(p + i) = valor;
    }
}

int contar_piezas(int (*criterio)(float, float), float valor, float *p, int n) {
    int contador = 0;
    for (int i = 0; i < n; i++) {
        if (criterio(*(p + i), valor))
            contador++;
    }
    return contador;
}

float* reservar_espacio(int n) {
    float *p = (float *) malloc(n * sizeof(float));
    if (p == NULL) {
        printf("Error al reservar memoria\n");
        exit(1);
    }
    return p;
}

void separar_piezas(int (*criterio)(float, float), float valor, float *p, int n, float *q) {
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (criterio(*(p + i), valor)) {
            *(q + j) = *(p + i);
            j++;
        }
    }
}

void mostrar_resultados(char *mensaje, float *p, int n) {
    printf("\nPiezas %s:\n", mensaje);
    for (int i = 0; i < n; i++) {
        printf("Diametro: %.2f\n", *(p + i));
    }
}

