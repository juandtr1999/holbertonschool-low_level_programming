#incluyen  <unistd.h>

/**
 * _putchar - escribe el carácter c en stdout
 * @c: El personaje a imprimir
 *
 * Retorno: Sobre el éxito 1.
 * Por error, se devuelve -1, y errno se establece correctamente.
 */
int _putchar(char c)
{
  retorno (escritura(1, & c, 1));
}
