#incluyen  "holberton.h"
  #incluyen  <stdlib.h>
/**
 * malloc_checked - Asigna memoria.
 * @b: tamaño a asignar
 * Retorno: puntero a la memoria asignada.
 */
void *malloc_checked( int bsin firmar)
{
  vacío *new_memory;

  new_memory = malloc(b);
  if (new_memory == NULL)
    {
      salida(98);
    }

  devolución (new_memory);
}
