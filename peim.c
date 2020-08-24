//incluyo la libreria creada (peim.h) e importo las librerías stdio, stdbool y assert.
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include "peim.h"

//implemento funciones definidas en peim.h
int pedirEntero(void)
{
  int e;
  scanf("%d", &e);
  return e;
}

void imprimeEntero(int x)
{
  printf("\n La variable vale %d\n", x);
}

void pedirArreglo(int a[], int n_max)
{
  int i=0;
  while(i<n_max)
  {
    printf("\n Ingrese un valor para el elemento %d del arreglo: ",i); //tras cada iteración se solicitará el arreglo correspondiente
	  scanf("%d",&a[i]);
    i=i+1;
  }
}

void imprimeArreglo(int a[], int n_max)
{
  int i=0;
  while(i<n_max)
  {
    printf("\n  El elemento %d es %d\n",i,a[i]); 
    i=i+1;
  }
}