# incluir  " listas.h "
/ * *
* print_listint - Imprime una lista
* @h: variable
* Devolución: n
* /
size_t  print_listint ( const  listint_t * h)
{
	size_t n = 0 ;

	mientras (h)
	{
		printf ( " % d \ n " , h-> n );
		h = h-> siguiente ;
		n ++;
	}
retorno (n);
