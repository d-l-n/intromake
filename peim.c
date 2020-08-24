//incluyo la libreria creada y stdio.h
#include <stdio.h>
#include "peim.h"

//implemento pedirEntero
int pedirEntero(void)
{
    int e;    
    printf("\n Ingrese un entero para la variable: ");
    scanf("%d", &e);
    return e;
}
// y ahora implemento imprime
void imprime(int x)
{
    printf("\n La variable vale %d\n", x);
}
