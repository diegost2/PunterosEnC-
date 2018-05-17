#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Punteros
    int *punteroNumero;
    int numero;
    numero=66;
    punteroNumero=&numero;
    //*punteroNumero=&numero; //No se puede
    //*punteroNumero=55; //No se puede
    printf("%d ",numero);
    printf("\n%p ",&numero);
    printf("\n%p ",punteroNumero);
    printf("\n%p ",&punteroNumero);
    //printf("\n%d ",*punteroNumero);

    return 0;
}
