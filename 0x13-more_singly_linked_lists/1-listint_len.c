# incluir  " listas.h "
/ * *
 * listint_len: imprime la longitud de la lista.
 * @h: Lista vinculada.
 * Retorno: Número de nodos en la lista.
 * /
int  listint_len ( const  listint_t * h)
{
	int nodos;

	para (nodos = 0 ; h; nodos ++)
		h = h-> siguiente ;

	retorno (nodos);
}
