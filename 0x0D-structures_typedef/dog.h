#ifndef DOG_H
#define DOG_H
/**
 *struct dog - a structure that creates variables used in the main function
 *which is also accessed in the main function
 *@name: A pointer pointing to a string
 *@age: A float that takes in an a number
 *@owner: A pointer variable that points to a string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
