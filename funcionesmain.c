#include "funciones.h"

void holaHasta(int n)
{
    while(n>0)
    {
      printf("\n  Hola\n");
      n-=1;
    }
}

int main()
{
  int n;
  printf("\n Ingrese un valor para N: ");
  n=pedirEntero();
  assert(n>0);
  holaHasta(n);
  return 0;
}
