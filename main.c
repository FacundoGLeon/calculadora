#include <stdio.h>
#include <stdlib.h>

int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);

int main() {
    int opcion;
    int num1, num2, resultado=0;

    do {
        printf("\n=== Calculadora Basica ===\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Salir\n");
        printf("Selecciona una opcion: ");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                printf("Ingrese primer entero:\n");
                scanf("%d",&num1);
                printf("Ingrese segundo entero:\n");
                scanf("%d",&num2);
                resultado = sumar(num1, num2);
                printf("Resultado de la suma: %d\n\n",resultado);
                break;

            case 2:
                printf("Ingrese primer entero\n");
                scanf("%d",&num1);
                printf("Ingrese segundo entero\n");
                scanf("%d",&num2);
                resultado = restar(num1, num2);
                printf("Resultado de la resta: %d\n\n",resultado);
                break;

            case 3:
                resultado = multiplicar(num1, num2);
                printf("Resultado de la multiplicacion: %d\n\n",resultado);
                break;
            case 4:
                printf("Saliendo de la calculadora...\n\n");
                break;
            default:
                printf("Opcion no valida. Intenta de nuevo.\n\n");
                break;
        }
    } while (opcion != 4);
    return 0;
}
//Facundo Leon
int sumar(int a, int b) {
    return a + b;
}
// Mks.Leon
int restar(int a, int b) {

    return a-b;
}

int multiplicar(int a, int b) {

    return 0;
}
