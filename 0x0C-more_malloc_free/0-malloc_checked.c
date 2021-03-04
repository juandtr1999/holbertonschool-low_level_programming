#include "holberton.h"
#include <stdio.h>

/**
 *malloc_checked : allocate memory by malloc
 *@b: int unsigned
 *Return: A pointer to allocated memory
 */

void *malloc_checked( int bsin unsigned)
{
  vacío *p;

  p = malloc(b);
  if (p == NULL)
    {
      exit(98);
    }
  return (p);
}
