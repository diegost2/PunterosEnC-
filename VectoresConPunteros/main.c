#include <stdio.h>
#include <stdlib.h>
void mostrar(int *puntero, int cantidad);
void mostrarVector(int *puntero);
int main()
{
    int numeros[3];
    int *puntero;
    int auxiliar=333;
    puntero=numeros;
    numeros[0]=9;
    numeros[1]=99;
    numeros[2]=999;

    printf("\n Puntero: %d ",puntero); // es lo mismo que con ,numeros); // direccion de memoria
    printf("\n Puntero: %d ",numeros); //
    printf("\n");
    printf("\n Puntero: %d ",*(puntero-2));
    printf("\n Puntero: %d ",*(puntero+2));
    printf("\n Puntero: %d ",*(puntero+3));
    printf("\n Puntero: %d ",*(puntero+4));
    printf("\n");

    mostrar(numeros,3);

    return 0;
}

void mostrarVector(int *puntero)
{

}

void mostrar(int *puntero, int cantidad)
{
    int i;
    for(i=0;i<cantidad;i++)
    {
        printf("\n numero: %d ",*(puntero+i)); // *puntero+i : suma 1 + 1 // *(puntero+i) : muestra siguiente direccion del array
    }

}
