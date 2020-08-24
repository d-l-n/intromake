//incluyo la libreria creada, stdio, stdbool y assert
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include "peim.h"

//implemento pedirEntero
int pedirEntero(void)
{
    int e;
    scanf("%d", &e);
    return e;
}
// y ahora implemento imprime
void imprimeEntero(int x)
{
    printf("\n La variable vale %d\n", x);
}
