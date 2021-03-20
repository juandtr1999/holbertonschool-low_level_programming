#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{

	char *str;
	unsigned int len;
	struct list_s *next;

} list_t;

/*prototypes*/

int print_list(const list_ *h);
int list_len(const list *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
