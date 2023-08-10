#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct that describes properties of dogs
 *@name: Char pointer to a string name
 *@owner: Char pointer to a string owner
 *@age: float that represents the age of the dog
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
