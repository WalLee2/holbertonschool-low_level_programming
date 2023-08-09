#ifndef DOG_H
#define DOG_H
/**
 * struct dog - struct that describes properties of dogs
 *@name: Char pointer to a string name
 *@owner: Char pointer to a string owner
 *@age: float that represents the age of the dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

#endif
