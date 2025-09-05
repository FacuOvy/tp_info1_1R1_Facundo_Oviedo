#include<stdio.h>
#include<math.h>

float calcularAreaRectangulo(float longitud, float altura){
    float area = longitud*altura;
    return area;
}
float calcularPerimetroRectangulo(float longitud, float altura){
    float perimetro = 2*(longitud+altura);
    return perimetro;
}
float calcularDiagonalRectangulo(float longitud, float altura){
    float cuadradoLong = longitud*longitud;
    float cuadradoAltura = altura*altura;
    float diagonal = sqrt(cuadradoAltura+cuadradoLong);
    return diagonal;
}
float calcularAreaCirculo(float radio){
    float area = M_PI*radio*radio;
    return area;
}
float calcularPerimetroCirculo(float radio){
    float perimetro = 2*M_PI*radio;
    return perimetro;
}
void imprimirResultados(float perimetro, float area){
    printf("El perimetro de su figura es: %.2f[cm]\n", perimetro);
    printf("El area de su figura es: %.2f [cm2]", area);
}
int main(){
    
    int choose;
    float lon, rad, alt;
    printf("MENU: \n");
    printf("Seleccione la figura: \n");
    printf("1.Rectangulo \n");
    printf("2.Circulo \n");
    scanf("%d", &choose);
    
    switch(choose){
        
        case 1:
        printf("Opción de rectangulo seleccionada en [cm]: \n");
        printf("Ingrese la longitud: \n");
        scanf("%f", &lon);
        printf("Ingrese la altura del rectangulo en [cm]: \n");
        scanf("%f", &alt);
        int m = calcularAreaRectangulo(lon, alt);
        int n = calcularPerimetroRectangulo(lon, alt);
        imprimirResultados(m, n);
        break;
        
        case 2:
        printf("Opción de circulo seleccionada \n");
        printf("Ingrese el radio en [cm]: \n");
        scanf("%f", &rad);
        int l = calcularAreaCirculo(rad);
        int o = calcularPerimetroCirculo(rad);
        imprimirResultados(l, o);
        break;
    
    }
    return 0;
}
