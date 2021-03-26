# incluye  " holberton.h "
/ * *
 * binary_to_uint - Convierte binary a unsigned int
 * @b: número binario
 * Devolución: número convertido.
 * /
unsigned  int  binary_to_uint ( const  char * b)
{
	int i;
	unsigned  int res;

	si (! b)
		return ( 0 );
	para (i = 0 ; b [i]; i ++)
		si (b [i]! = ' 1 ' && b [i]! = ' 0 ' )
			return ( 0 );
	para (i = 0 ; b [i]; i ++)
	{
		res = res << 1 ;
		si (b [i] == ' 1 ' )
			res = res + 1 ;
	}
	retorno (res);
