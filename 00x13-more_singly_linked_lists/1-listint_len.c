# incluir  " listas.h "
/ * *
* listint_len - función que devuelve el número de elementos
* @h: variable
* Devolución: n
* /
size_t  listint_len ( const  listint_t * h)
{
	size_t n = 0 ;

	mientras (h)
	{
		h = h-> siguiente ;
		n ++;
	}
retorno (n);
}
