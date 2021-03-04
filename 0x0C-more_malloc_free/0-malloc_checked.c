#include <stdio.h>
#include <stdio.h>
#incluyen <limits.h>
#incluyen  "holberton.h"
/**
 * * malloc_checked - programa que imprime su nombre.
 * @b: matriz de punteros de caracteres
 * Devolución: 0.
 */
void *malloc_checked( int bsin firmar)
{
  vacío *p;

  p = malloc(b);

  if (p == NULL)
    {
      gratis(p);

      salida(98);
    }
  retorno (p);
}
