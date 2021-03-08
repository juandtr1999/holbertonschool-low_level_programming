#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * struct dog - Dog data.
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's buddy
 * Description: Defines dog's information
 */
struct dog
{
	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
