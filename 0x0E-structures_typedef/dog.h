#ifndef DOG_H
#define DOG_H

/**
 * struct dog - basic structure of a dog
 * @name: name of the dog.
 * @age: how old the dog is.
 * @owner: the owner of the dog.
 *
 * Description: User-defined data type for a dog.
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
