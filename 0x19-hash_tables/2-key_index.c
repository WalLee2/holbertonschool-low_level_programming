#include "hash_tables.h"
/**
 *key_index - Getting the index of a key
 *@key: An unsigned character pointer that takes in a string
 *@size: Unsigned long integer that takes in a number.
 *Return: The newly generated index of where the key is going to be set
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx, hash_val;

	hash_val = hash_djb2(key);
	idx = hash_val % size;
	return (idx);
}
