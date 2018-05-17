#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[15]={"MiNombre"};
    char *apellido={"MiApellido"};
    char *puntero;
    puntero=nombre;
    printf("%s ",nombre);
    printf("\n%s",apellido);
    //printf("\n%s",*puntero); //Error
    printf("\n%s\n",puntero);

    int i;
    for(i=0;*(apellido+i)!='\0';i++)  //i<11 condicion (11(tamaño de letras))
    {
        printf("\nLetrasDeApellido: %c\n",*(apellido+i));
    }
    return 0;
}
