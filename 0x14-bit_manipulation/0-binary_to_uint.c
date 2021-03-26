# incluye  " holberton.h "
/ * *
 * _strlen: calcula la longitud de la cadena
 * @s: entrada
 * Retorno: longitud de la cuerda
 * /
unsigned  int  _strlen ( const  char * s)
{
	 longitud int sin firmar ;

	para (longitud = 0 ; * (s + longitud); longitud ++)
		;
	retorno (longitud);
}
/ * *
 * binary_to_uint: convierte una cadena de unos y ceros en un número decimal
 * @b: cadena para convertir
 * Devolución: número decimal sin signo
 * /
unsigned  int  binary_to_uint ( const  char * b)
{
	int i;
	 resultado int sin firmar , expo;

	si (! b)
		return ( 0 );
	i = _strlen (b) - 1 ;
	para (resultado = 0 , expo = 1 ; i> = 0 ; i--, expo * = 2 )
	{
		si (b [i]! = ' 0 ' && b [i]! = ' 1 ' )
			return ( 0 );
		si (b [i] == ' 1 ' )
			resultado + = expo;
	}
	retorno (resultado);
}
