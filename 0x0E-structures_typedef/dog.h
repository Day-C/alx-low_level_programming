#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure contains format for identifying dogs
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
