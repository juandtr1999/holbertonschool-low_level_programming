# incluir  " listas.h "
# incluye  < stdio.h >
/ * *
 * print_listint: imprime todos los elementos de la lista.
 * @h: Lista vinculada.
 * Retorno: Número de nodos en la lista.
 * /
int  print_listint ( const  listint_t * h)
{
	int nodos;

	para (nodos = 0 ; h; nodos ++)
	{
		printf ( " % i \ n " , h-> n );
		h = h-> siguiente ;
	}

	retorno (nodos);
}
