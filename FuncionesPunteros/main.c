#include <stdio.h>
#include <stdlib.h>
void Intercambiar(int num1, int num2);//No intercambia
void IntercambiarConPunteros(int* num1, int* num2); //pasaje por referencia
void PonerEnCero(int *num);

int main()
{
    int edadUno;
    int edadDos;
    edadUno=22;
    edadDos=99;

    PonerEnCero(&edadDos);
    printf("%d\n",edadDos);
    //Intercambiar(edadUno,edadDos); // pasaje por valor
    IntercambiarConPunteros(&edadUno,&edadDos); // pasaje por referencia
    printf("\nEdadUno: %d",edadUno);
    printf("\nEdadDos: %d",edadDos);

    return 0;
}

void PonerEnCero(int *num)
{
    *num=0;
}

void IntercambiarConPunteros(int* num1, int* num2)
{
    int aux;

    aux=*num1;
    *num1=*num2;
    *num2=aux;
}

void Intercambiar(int num1, int num2) //No sirve // Pasaje por  Valor
{
    int aux;

    aux=num1;
    num1=num2;
    num2=aux;
}
