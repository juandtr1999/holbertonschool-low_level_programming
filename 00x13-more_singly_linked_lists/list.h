# ifndef LISTS_H
# define  LISTS_H
/ * *
 * struct listint_s - lista enlazada individualmente
 * @n: entero
 * @next: apunta al siguiente nodo
 * Descripción: estructura de nodo de lista enlazada individualmente
 * para el proyecto Holberton
 * /
typedef  struct listint_s
{
	int n;
	struct listint_s * siguiente;
} listint_t ;
int  print_listint ( const  listint_t * h);
int  listint_len ( const  listint_t * h);
listint_t * add_nodeint ( listint_t ** encabezado, const  int n);
listint_t * add_nodeint_end ( listint_t ** encabezado, const  int n);
void  free_listint ( listint_t * cabeza);
void  free_listint2 ( listint_t ** cabeza);
int  pop_listint ( listint_t ** head);
listint_t * get_nodeint_at_index ( listint_t * encabezado, índice int sin firmar  );
int  sum_listint ( listint_t * cabeza);
listint_t * insert_nodeint_at_index ( listint_t ** head, unsigned  int idx, int n);
int  delete_nodeint_at_index ( listint_t ** head, índice int sin firmar  );
listint_t * reverse_listint ( listint_t ** encabezado);
int  print_listint_safe ( const  listint_t * head);
int  free_listint_safe ( listint_t ** h);
listint_t * find_listint_loop ( listint_t * cabeza);

# endif
