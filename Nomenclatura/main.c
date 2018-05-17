#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Punteros
    int *punteroNumero;
    int numero;
    int numeroDos;
    numero=66;

    punteroNumero=&numero;
    numeroDos=&numero;
    printf("\n(Asigancion de memoria) NumeroDos: %d ",numeroDos); //de memoria
    numeroDos=*punteroNumero;
    printf("\n(Asigancion de valor) NumeroDos: %d ",numeroDos);// de valor
    //*punteroNumero=&numero; //No se puede
    //*punteroNumero=55; //No se puede
    printf("\nNumero: %d ",numero);
    printf("\n&Numero: %p ",&numero);
    printf("\nPunteroNumero: %p ",punteroNumero);//
    printf("\n&PunteroNumero: %p ",&punteroNumero);//
    printf("\n*PunteroNumero: %d ",*punteroNumero);//

    return 0;
}
